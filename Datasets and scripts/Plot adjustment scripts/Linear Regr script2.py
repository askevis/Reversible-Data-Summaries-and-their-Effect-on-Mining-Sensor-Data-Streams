import os

def parse_file(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    # Find the start and end index of the array in the content
    start_index = content.find('[')
    end_index = content.find(']')

    # Extract the array and convert it to a list of floats
    values_str = content[start_index + 1:end_index].split(', ')
    values = [float(value) for value in values_str]

    return values

import os

def parse_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    
    # Assuming the last line of the file contains the list of values
    values_line = lines[-1]
    
    # Extracting the list of values
    values_str = values_line.replace('[', '').replace(']', '').split(', ')
    values = [float(value) for value in values_str]
    
    return  values

def calculate_sums(window, compression,path2 =r'C:\Users\tony7\Desktop\Updated Measurements\1.3LINEAR REGR-INTEL\Linear Regression Humidities  Measurements'):
    sum_ari_values = {'DFT': 0.0, 'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    sum_silhouette_values = {'DFT': 0.0, 'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    outlier_r2_counter = {'DFT': 0, 'DCT': 0, 'DWT': 0, 'PAA': 0, 'MINE': 0}
    outlier_rmse_counter = {'DFT': 0, 'DCT': 0, 'DWT': 0, 'PAA': 0, 'MINE': 0}
                    
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
        values = parse_file(method_file_path)
       
        # Extract method name from the filename
        method_name = method_file.split('_')[0]
        
        # Check if the window and compression values match
        if 'RMSEs' in method_file:
            # Add values to the ARI sum
            souma = 0
            valuescount = 0
            for value in values:
                valuescount += 1
                if value > 1:
                    value = 1
                souma += value  # Move this line inside the loop
            sum_ari_values[method_name] += souma / valuescount  # Corrected indentation
            # Check for outliers in RMSE
            outlier_rmse_counter[method_name] += sum(1 for value in values if value > 1)
        elif 'R2' in method_file:
            # Add values to the Silhouette sum
            souma2 = 0
            valuescount = 0
            for value in values:
                valuescount += 1
                if value > 1:
                    value = 1
                if value < -1:
                    value = -1
                souma2 += value  # Move this line inside the loop
            sum_silhouette_values[method_name] += souma2 / valuescount  # Corrected indentation
            # Check for outliers in R2
            outlier_r2_counter[method_name] += sum(1 for value in values if value < -1 or value > 1)
    
    # Round each value in both dictionaries to 5 decimal places
    sum_ari_values = {key: round(value ,5) for key, value in sum_ari_values.items()}
    sum_silhouette_values = {key: round(value ,5) for key, value in sum_silhouette_values.items()}
    
    print(f'Sum of R2 for DFT, DCT, DWT, PAA, MINE: {sum_silhouette_values}')
    print(f'Sum of RMSEs for DFT, DCT, DWT, PAA, MINE: {sum_ari_values}')
    
    # Print outlier counters
    for method_name in outlier_r2_counter.keys():
        print(f'Outliers for R2 in {method_name}: {outlier_r2_counter[method_name]/5}')
    
    for method_name in outlier_rmse_counter.keys():
        print(f'Outliers for RMSE in {method_name}: {outlier_rmse_counter[method_name]/5}')

# Example usage:
window_value = 128
compression_value = 4
calculate_sums(window_value, compression_value)

