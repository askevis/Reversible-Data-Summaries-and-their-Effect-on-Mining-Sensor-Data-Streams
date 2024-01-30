import os
import matplotlib.pyplot as plt
from matplotlib.backends.backend_pdf import PdfPages
import numpy as np
from scipy import stats

def plot_score_r2_confidence_interval(ax, scores, method, window_size, compression, color, is_rmse=False):
    n = len(scores)
    x = np.arange(n) + 1
    y = np.array(scores)

    # Clip values between -1 and 1
    y = np.clip(y, -1, 1)

    mean = np.mean(y)
    ci = stats.t.interval(0.95, len(y), loc=mean, scale=stats.sem(y))

    ax.plot(x, y, 'o', markersize=4, color=color, label=f'{method} Data Points')
    ax.plot(x, [mean] * n, '--', color='red', label=f'{method} Mean')  # Plot mean with the same color as data points

    ax.set_xlabel('Window')
    ax.set_ylabel('Score')
    ax.grid(True)
    if method == 'MINE' :
      method = 'RHP'
    if ci[1] > 1:
        ax.set_title(f'{method} : [{ci[0]:.5f}, {1}]')
    elif ci[0] < -1:
        ax.set_title(f'{method} : [{-1}, {ci[1]:.5f}]')
    else: ax.set_title(f'{method} : [{ci[0]:.5f}, {ci[1]:.5f}]') 
    
    # Add mean value to the y-axis
    #ax.text(0.5, mean, f'{mean:.5f}', color='red', ha='right', va='center')

    ax.text(0.85, 0.9, f'', transform=ax.transAxes, fontsize=10, color='blue', ha='right')
    ax.text(0.5, 0.95, f'', transform=ax.transAxes, fontsize=8, ha='center')

def plot_score_rmse_confidence_interval(ax, scores, method, window_size, compression, color, is_rmse=False):
    n = len(scores)
    x = np.arange(n) + 1
    y = np.array(scores)

    # Clip values between -1 and 1
    y = np.clip(y, -1, 1)

    mean = np.mean(y)
    ci = stats.t.interval(0.95, len(y), loc=mean, scale=stats.sem(y))

    ax.plot(x, y, 'o', markersize=4, color=color, label=f'{method} Data Points')
    ax.plot(x, [mean] * n, '--', color='red', label=f'{method} Mean')  # Plot mean with the same color as data points

    ax.set_xlabel('Window')
    ax.set_ylabel('Score')
    ax.grid(True)
    if method == 'MINE' :
      method = 'RHP'
    if ci[1] > 1:
        ax.set_title(f'{method} : [{ci[0]:.5f}, {1}]')
    elif ci[0] < 0:
        ax.set_title(f'{method} : [{0}, {ci[1]:.5f}]')
    else: ax.set_title(f'{method} : [{ci[0]:.5f}, {ci[1]:.5f}]') 
    
    # Add mean value to the y-axis
    #ax.text(0.5, mean, f'{mean:.5f}', color='red', ha='right', va='center')

    ax.text(0.85, 0.9, f'', transform=ax.transAxes, fontsize=10, color='blue', ha='right')
    ax.text(0.5, 0.95, f'', transform=ax.transAxes, fontsize=8, ha='center')
    
def read_scores_file(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    values_start = content.find('[') + 1
    values_end = content.find(']')
    values_str = content[values_start:values_end]

    return [float(value) for value in values_str.split(', ')]

def process_files(base_path):
    stride_values = [16, 32, 64, 128]
    compression_values = [4, 8, 16]

    # Define a list of colors for each method
    method_colors = {'DCT': 'blue', 'DFT': 'green', 'DWT': 'grey', 'PAA': 'purple', 'MINE': 'orange'}

    for stride in stride_values:
        for compression in compression_values:
            pdf_path_combined = os.path.join(base_path, f'plots_{stride}_{compression}_Combined.pdf')

            with PdfPages(pdf_path_combined) as pdf_combined:
                # Modify the figsize and hspace parameters for a more compact layout
                fig_combined, axs_combined = plt.subplots(2, 5, figsize=(20, 6), sharey=True)  # Adjust figsize
                plt.subplots_adjust(top=0.91, hspace=0.6)  # Adjust top value and reduce hspace


                for i, method in enumerate(['DCT', 'DFT', 'DWT', 'PAA', 'MINE']):
                    file_name_r2 = f'{method}_window size({stride})_compression({compression} - R2 SCORES)'
                    file_path_r2 = os.path.join(base_path, f'stride({stride})', f'compression({compression})', f'{file_name_r2}.txt')

                    file_name_rmse = f'{method}_window size({stride})_compression({compression} - RMSEs)'
                    file_path_rmse = os.path.join(base_path, f'stride({stride})', f'compression({compression})', f'{file_name_rmse}.txt')

                    try:
                        scores_r2 = read_scores_file(file_path_r2)
                        scores_rmse = read_scores_file(file_path_rmse)
                        color = method_colors[method]

                        # Plot R2
                        plot_score_r2_confidence_interval(axs_combined[0, i], scores_r2, method, stride, compression, color)
                        axs_combined[0, i].set_ylim(-1, 1)  # Set y-axis limit for R2 plots
                        axs_combined[0, i].tick_params(axis='y', which='both', labelleft=True)  # Show y-axis tick labels

                        # Plot RMSE
                        plot_score_rmse_confidence_interval(axs_combined[1, i], scores_rmse, method, stride, compression, color, is_rmse=True)
                        axs_combined[1, i].set_ylim(-1, 1)  # Set y-axis limit for RMSE plots
                        axs_combined[1, i].tick_params(axis='y', which='both', labelleft=True)  # Show y-axis tick labels
                    except FileNotFoundError:
                            print(f"File not found: {file_path_r2} or {file_path_rmse}")

                # Add R2 title
                fig_combined.text(0.5, 0.98, f'R2 Scores with 95% Confidence Interval // W={stride}, C={compression}', fontsize=12, ha='center')

                # Add RMSE title
                fig_combined.text(0.5, 0.48, f'RMSE Scores with 95% Confidence Interval // W={stride}, C={compression}', fontsize=12, ha='center')


                pdf_combined.savefig(fig_combined, bbox_inches='tight')  # Set bbox_inches to 'tight'
                plt.close(fig_combined)

# Set the base path to the directory containing your data files
base_path = r'C:\Users\tony7\Desktop\Updated Measurements\2.3Linear Regression PUMP Measurements'
process_files(base_path)
