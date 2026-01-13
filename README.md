# Reversible Data Summaries and Their Effect on Mining Sensor Data Streams

This repository accompanies my undergraduate thesis, which investigates how
**reversible data compression techniques** affect the performance of data mining
algorithms on **sensor data streams**.

The work focuses on balancing **compression efficiency**, **mining accuracy**,
and **network resource usage** in sensor and IoT environments.

---

## Abstract

This thesis studies the impact of reversible data summary methods on mining
sensor data streams. Four established techniques—**Discrete Fourier Transform
(DFT)**, **Discrete Cosine Transform (DCT)**, **Discrete Wavelet Transform
(DWT)**, and **Piecewise Aggregate Approximation (PAA)**—are evaluated alongside
a **novel Reversible Random Hyperplane Projection method** proposed in this work.

Compression methods are applied to sensor datasets using tumbling windows of
varying sizes. Multiple data mining tasks are performed on both raw and
compressed data, including clustering, classification, and regression, in order
to assess how well each method preserves analytical accuracy after compression.

In addition, a simulated sensor network using **TOSSIM** is employed to evaluate
real-world effects on data transmission cost and energy consumption. The results
provide insight into how reversible compression can extend sensor network
lifetime while maintaining useful analytical performance.

---

## Compression Methods Evaluated

- Discrete Fourier Transform (DFT)
- Discrete Cosine Transform (DCT)
- Discrete Wavelet Transform (DWT)
- Piecewise Aggregate Approximation (PAA)
- **Proposed Method**: Reversible Random Hyperplane Projection

---

## Data Mining Techniques

The following algorithms are applied to both raw and compressed data:

### Clustering
- K-Means
- DBSCAN

### Classification
- Support Vector Machines (SVM)
- K-Nearest Neighbours (K-NN)
- Neural Network

### Regression
- Linear Regression
- Logistic Regression

---

## Experimental Setup

- Sliding-window processing with varying tumbling window sizes
- Evaluation on multiple sensor datasets
- Direct comparison between raw and compressed representations
- Accuracy, clustering quality, and regression performance metrics

---

## Network Simulation

To assess real-world feasibility, a sensor network is simulated using **TOSSIM**.
The simulation evaluates:

- Number of transmitted bits
- Power consumption
- Impact of compression on network lifetime

---

## Key Contributions

- Comparative evaluation of reversible compression techniques for sensor data
- Introduction of a reversible random projection-based compression method
- Combined analysis of mining accuracy and network-level efficiency
- Practical insights for compression-aware sensor and IoT deployments

---

## Thesis Structure

1. Introduction and Motivation  
2. Related Work on Reversible Compression  
3. Proposed Compression Method  
4. TOSSIM Network Simulation  
5. Datasets, Algorithms, and Metrics  
6. Performance Evaluation and Results  

---

## Author

**Antonis Skevis**  
MEng Electrical and Computer Engineering  
