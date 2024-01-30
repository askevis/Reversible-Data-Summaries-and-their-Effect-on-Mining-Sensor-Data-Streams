import os

def parse_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()

        num_unsuccessful_clusters = 0
        num_clusters_with_zeros = 0

        for line in lines:
            if 'Number of subsets where clustering was not possible' in line:
                num_unsuccessful_clusters = int(line.split(': ')[1])
            elif 'Number of clusters filled with only zeros' in line:
                num_clusters_with_zeros = int(line.split(': ')[1])

        # Extracting the average silhouette score
        try:
            average_silhouette_score = float(lines[-2].split(': ')[1])
        except ValueError:
            print("Error: Could not convert average silhouette score to float.")
            average_silhouette_score = -1  # Replace None with -1

        # Extracting the values
        values_str = lines[-1].replace('[', '').replace(']', '').split(', ')
        values = [float(value) for value in values_str if value.strip()]

        return average_silhouette_score, num_unsuccessful_clusters, num_clusters_with_zeros, values

def calculate_sums(window, compression, base_path=r'C:\Users\tony7\Desktop\Updated Measurements\1.2DBSCAN-INTEL', path2=r'C:\Users\tony7\Desktop\Updated Measurements\2.2DBSCAN new PUMP Measurements'):
    sum_ari_values = {'DFT': 0.0, 'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    sum_silhouette_values = {'DFT': 0.0, 'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    sum_unsuccessful_clusters = {'DFT': 0, 'DCT': 0, 'DWT': 0, 'PAA': 0, 'MINE': 0}
    sum_clusters_with_zeros = {'DFT': 0, 'DCT': 0, 'DWT': 0, 'PAA': 0, 'MINE': 0}
    
    total_subsets = {
        "DBSCAN Humidities Measurements(eps = 0.4 )": {"16": 30, "32": 15, "64": 7, "128": 3},
        "DBSCAN Lights Measurements(eps = 0.4 )": {"16": 30, "32": 15, "64": 7, "128": 3},
        "DBSCAN Temperatures Measurements(eps = 0.5 )": {"16": 39, "32": 19, "64": 9, "128": 4},
        "DBSCAN Voltages Measurements(eps = 0.4 )": {"16": 30, "32": 15, "64": 7, "128": 3},
        "path2": {"16": 125, "32": 62, "64": 31, "128": 15}
    }
    
    # Iterate through Kmeans Humidities Measurements to Kmeans Voltages Measurements
    for folder_name in ["DBSCAN Humidities Measurements(eps = 0.4 )", 
                        "DBSCAN Lights Measurements(eps = 0.4 )", 
                        "DBSCAN Temperatures Measurements(eps = 0.5 )", 
                        "DBSCAN Voltages Measurements(eps = 0.4 )"]:
        
        file_path = os.path.join(base_path, folder_name)

        # Construct the path to the specified window and compression folders
        window_path = os.path.join(file_path, f'stride({window})')
        compression_path = os.path.join(window_path, f'compression({compression})')

        # Iterate through text files
        for method_file in os.listdir(compression_path):
            if method_file.endswith('.txt'):
                method_file_path = os.path.join(compression_path, method_file)

                # Parse the file
                avg_score, *extra_values = parse_file(method_file_path)

                # Extract method name from the filename
                method_name = method_file.split('_')[0]

                # Check if the window and compression values match
                if 'ARIs' in method_file:
                    # Add values to the ARI sum
                    sum_ari_values[method_name] += avg_score
                elif 'SILHOUETTES' in method_file:
                    # Add values to the Silhouette sum
                    sum_silhouette_values[method_name] += avg_score
                    # Add values to the new metrics sum
                    if extra_values[0] is not None:
                        sum_unsuccessful_clusters[method_name] += (extra_values[0] / total_subsets[folder_name][str(window)]) * 100
                    if extra_values[1] is not None:
                        sum_clusters_with_zeros[method_name] += (extra_values[1] / total_subsets[folder_name][str(window)]) * 100

    # Iterate through Kmeans Humidities Measurements to Kmeans Voltages Measurements
    file_path = path2

    # Construct the path to the specified window and compression folders
    window_path = os.path.join(file_path, f'stride({window})')
    compression_path = os.path.join(window_path, f'compression({compression})')

    # Iterate through text files
    for method_file in os.listdir(compression_path):
        if method_file.endswith('.txt'):
            method_file_path = os.path.join(compression_path, method_file)

            # Parse the file
            avg_score, *extra_values = parse_file(method_file_path)

            # Extract method name from the filename
            method_name = method_file.split('_')[0]

            # Check if the window and compression values match
            if 'ARIs' in method_file:
                # Add values to the ARI sum
                sum_ari_values[method_name] += avg_score
            elif 'SILHOUETTES' in method_file:
                # Add values to the Silhouette sum
                sum_silhouette_values[method_name] += avg_score
                # Add values to the new metrics sum
                if extra_values[0] is not None:
                    sum_unsuccessful_clusters[method_name] += (extra_values[0] / total_subsets["path2"][str(window)]) * 100
                if extra_values[1] is not None:
                    sum_clusters_with_zeros[method_name] += (extra_values[1] / total_subsets["path2"][str(window)]) * 100

    # Round each value in both dictionaries to 5 decimal places
    sum_ari_values = {key: round(value / 5, 5) for key, value in sum_ari_values.items()}
    sum_silhouette_values = {key: round(value / 5, 5) for key, value in sum_silhouette_values.items()}
    sum_unsuccessful_clusters = {key: round(value / 5, 5) for key, value in sum_unsuccessful_clusters.items()}
    sum_clusters_with_zeros = {key: round(value / 5, 5) for key, value in sum_clusters_with_zeros.items()}

    print(f'Sum of ARIs for DCT, DFT, DWT, PAA, MINE: {sum_ari_values}')
    print(f'Sum of Silhouettes for DCT, DFT, DWT, PAA, MINE: {sum_silhouette_values}')
    print(f'Average percentage of Unsuccessful Clusters for DCT, DFT, DWT, PAA, MINE: {sum_unsuccessful_clusters}')
    print(f'Average percentage of Clusters with Zeros for DCT, DFT, DWT, PAA, MINE: {sum_clusters_with_zeros}')

# Example usage:
window_value = 128
compression_value = 16
calculate_sums(window_value, compression_value)

