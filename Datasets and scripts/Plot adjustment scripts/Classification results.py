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

def calculate_sums(window, compression, base_path=r'C:\Users\tony7\Desktop\Updated Measurements'):
    sum_ari_values = { 'DFT': 0.0,'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    sum_silhouette_values = { 'DFT': 0.0,'DCT': 0.0, 'DWT': 0.0, 'PAA': 0.0, 'MINE': 0.0}
    
    # Iterate through Kmeans Humidities Measurements to Kmeans Voltages Measurements
    for folder_name in ["2.4LOGISTIC Regression new PUMP Measurements", 
                        "2.5KNN PUMP Measurements", 
                        "2.6SVM new PUMP Measurements", 
                        "2.7Neural Network PUMP Measurements"]:
        
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
                if 'ACCURACY' in method_file:
                    # Add values to the ARI sum
                    sum_ari_values[method_name] += avg_score
                elif 'f1' in method_file:
                    # Add values to the Silhouette sum
                    sum_silhouette_values[method_name] += avg_score
                                   
    
    return sum_ari_values, sum_silhouette_values

# Example usage:
window_value = 128
compression_value = 16
ari_result, silhouette_result = calculate_sums(window_value, compression_value)
# Round each value in both dictionaries to 5 decimal places
ari_result = {key: round(value / 4, 4) for key, value in ari_result.items()}
silhouette_result = {key: round(value / 4, 4) for key, value in silhouette_result.items()}
print(f'Sum of ACCURACY for DCT, DFT, DWT, PAA, MINE: {ari_result}')
print(f'Sum of F1 for DCT, DFT, DWT, PAA, MINE: {silhouette_result}')
