import os

def parse_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    
    # Assuming the last line of the file contains the list of values
    values_line = lines[-1]
    
    # Extracting the list of values
    values_str = values_line.replace('[', '').replace(']', '').split(', ')
    values = [float(value) for value in values_str]
    
    # Extracting the average silhouette score
    average_silhouette_score = float(lines[0].split(': ')[1])
    
    return average_silhouette_score, values

def calculate_sums(window, compression, base_path=r'C:\Users\tony7\Desktop\Updated Measurements\1.1Kmeans INTEL',path2 =r'C:\Users\tony7\Desktop\Updated Measurements\2.1Kmeans new PUMP Measurements(k = 2)'):
    sum_ari_values = { 'DFT': 0.0,'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    sum_silhouette_values = { 'DFT': 0.0,'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    
    # Iterate through Kmeans Humidities Measurements to Kmeans Voltages Measurements
    for folder_name in ["Kmeans Humidities Measurements(k = 2)", 
                        "Kmeans Lights Measurements(k = 2)", 
                        "Kmeans Temperatures Measurements(k = 4)", 
                        "Kmeans Voltages Measurements(k = 2)"]:
        
        file_path = os.path.join(base_path, folder_name)
        
        # Construct the path to the specified window and compression folders
        window_path = os.path.join(file_path, f'stride({window})')
        compression_path = os.path.join(window_path, f'compression({compression})')
        
        # Iterate through text files
        for method_file in os.listdir(compression_path):
            if method_file.endswith('.txt'):
                method_file_path = os.path.join(compression_path, method_file)
                
                # Parse the file
                avg_score, values = parse_file(method_file_path)
                
                # Extract method name from the filename
                method_name = method_file.split('_')[0]
                
                # Check if the window and compression values match
                if 'ARIs' in method_file:
                    # Add values to the ARI sum
                    sum_ari_values[method_name] += avg_score
                elif 'SILHOUETTES' in method_file:
                    # Add values to the Silhouette sum
                    sum_silhouette_values[method_name] += avg_score
                    
    # Iterate through Kmeans Humidities Measurements to Kmeans Voltages Measurements
    file_path = path2
        
    # Construct the path to the specified window and compression folders
    window_path = os.path.join(file_path, f'stride({window})')
    compression_path = os.path.join(window_path, f'compression({compression})')
        
    # Iterate through text file
    for method_file in os.listdir(compression_path):
            if method_file.endswith('.txt'):
                method_file_path = os.path.join(compression_path, method_file)
                
                # Parse the file
                avg_score, values = parse_file(method_file_path)
                
                # Extract method name from the filename
                method_name = method_file.split('_')[0]
                
                # Check if the window and compression values match
                if 'ARIs' in method_file:
                    # Add values to the ARI sum
                    sum_ari_values[method_name] += avg_score
                elif 'SILHOUETTES' in method_file:
                    # Add values to the Silhouette sum
                    sum_silhouette_values[method_name] += avg_score                  
    
    return sum_ari_values, sum_silhouette_values

# Example usage:
window_value = 16
compression_value = 4
ari_result, silhouette_result = calculate_sums(window_value, compression_value)
# Round each value in both dictionaries to 5 decimal places
ari_result = {key: round(value / 5, 5) for key, value in ari_result.items()}
silhouette_result = {key: round(value / 5, 5) for key, value in silhouette_result.items()}
print(f'Sum of ARIs for DCT, DFT, DWT, PAA, MINE: {ari_result}')
print(f'Sum of Silhouettes for DCT, DFT, DWT, PAA, MINE: {silhouette_result}')
