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

def calculate_sums(window, compression, base_path=r'C:\Users\tony7\Desktop\Updated Measurements\1.3LINEAR REGR-INTEL',path2 =r'C:\Users\tony7\Desktop\Updated Measurements\2.3Linear Regression PUMP Measurements'):
    sum_ari_values = {'DFT': 0.0, 'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    sum_silhouette_values = {'DFT': 0.0, 'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    outlier_r2_counter = {'DFT': 0, 'DCT': 0, 'DWT': 0, 'PAA': 0, 'MINE': 0}
    outlier_rmse_counter = {'DFT': 0, 'DCT': 0, 'DWT': 0, 'PAA': 0, 'MINE': 0}
    
    # Iterate through Kmeans Humidities Measurements to Kmeans Voltages Measurements
    for folder_name in ["Linear Regression Humidities  Measurements", 
                        "Linear Regression Lights  Measurements", 
                        "Linear Regression Temperatures  Measurements", 
                        "Linear Regression Voltages  Measurements"]:
        
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
                if 'RMSEs' in method_file:
                    # Add values to the ARI sum
                    sum_ari_values[method_name] += avg_score
                    # Check for outliers in RMSE
                    outlier_rmse_counter[method_name] += sum(1 for value in values if value > 5)
                elif 'R2' in method_file:
                    # Add values to the Silhouette sum
                    sum_silhouette_values[method_name] += avg_score
                    # Check for outliers in R2
                    outlier_r2_counter[method_name] += sum(1 for value in values if value < -5 or value > 5)
                    
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
                if 'RMSEs' in method_file:
                    # Add values to the ARI sum
                    sum_ari_values[method_name] += avg_score
                    # Check for outliers in RMSE
                    outlier_rmse_counter[method_name] += sum(1 for value in values if value > 5)
                elif 'R2' in method_file:
                    # Add values to the Silhouette sum
                    sum_silhouette_values[method_name] += avg_score
                    # Check for outliers in R2
                    outlier_r2_counter[method_name] += sum(1 for value in values if value < -5 or value > 5)
    
    # Round each value in both dictionaries to 5 decimal places
    sum_ari_values = {key: round(value / 5, 5) for key, value in sum_ari_values.items()}
    sum_silhouette_values = {key: round(value / 5, 5) for key, value in sum_silhouette_values.items()}
    
    print(f'Sum of R2 for DFT, DCT, DWT, PAA, MINE: {sum_silhouette_values}')
    print(f'Sum of RMSEs for DFT, DCT, DWT, PAA, MINE: {sum_ari_values}')
    
    # Print outlier counters
    for method_name in outlier_r2_counter.keys():
        print(f'Outliers for R2 in {method_name}: {outlier_r2_counter[method_name]/5}')
    
    for method_name in outlier_rmse_counter.keys():
        print(f'Outliers for RMSE in {method_name}: {outlier_rmse_counter[method_name]/5}')

# Example usage:
window_value = 16
compression_value = 4
calculate_sums(window_value, compression_value)
