ABSTRACT
This thesis investigates the effect of reversible data summary methods in the
context of mining sensor data streams. The study explores four well-established
methods, namely Discrete Fourier Transform (DFT), Discrete Cosine Transform
(DCT), Discrete Wavelet Transform (DWT), and Piecewise Aggregate
Approximation (PAA), alongside a novel Reversible Random Hyperplane
Projection method developed within the scope of this thesis.
As part of this research, we apply the aforementioned compression techniques
to two datasets that contain sensor measurements. We employ tumbling
windows of varying sizes and leverage an array of data mining techniques.
These include diverse clustering methods such as K-Means and DBSCAN,
regression algorithms like Linear and Logistic Regression, and various
classification approaches such as K-NN, SVM, and a Neural Network. We apply
these techniques to both raw and compressed datasets, ensuring a
comprehensive analysis of the data. The study aims to assess how well each
compression method retains the accuracy of results compared to the original,
raw, data. By directly comparing these methods, we gain insights into their
effectiveness in retaining crucial information for data mining purposes within
the compressed representations.
Additionally, the study explores real-world network effects of the involved
compression techniques by simulating a sensor network using TOSSIM. This
simulation evaluates how data compression affects the number of bits needed to
transmit a dataset and the resulting power savings. By gaining insights from
these results, the research contributes to understanding how compression
techniques could increase the lifetime of sensor networks, an important factor
for sustainable and efficient deployments of resources, not only in sensor, but
also in broader Internet of Things (IoT) settings.
This detailed analysis has two goals: firstly, to compare how different data
compression methods perform, and secondly, to provide practical insights for
using them in real-world sensor networks.
4
Reversible Data Summaries and their Effect on Mining Sensor Data Streams
CONTENTS
ACKNOWLEDGEMENTS..................................................................................................3
ABSTRACT....................................................................................................................4
CHAPTER 1: INTRODUCTION...................................................................................7
1.1 THESIS MOTIVATION......................................................................................7
1.2 METHODOLOGY..............................................................................................7
1.3 CHAPTER OUTLINE........................................................................................ 8
CHAPTER 2: RELATED WORK ON REVERSIBLE DATA COMPRESSION
METHODS................................................................................................................... 11
2.1 THE DISCRETE FOURIER TRANSFORM (DFT)........................................ 11
2.1.1 Introduction to DFT.................................................................................. 11
2.1.2 DFT Applications..................................................................................... 13
2.1.3 DFT Data Compression............................................................................ 14
2.2 THE DISCRETE COSINE TRANSFORM (DCT).......................................... 16
2.2.1 Introduction to DCT................................................................................. 16
2.2.2 DCT Applications.....................................................................................17
2.2.3 DCT Data Compression............................................................................18
2.3 THE DISCRETE WAVELET TRANSFORM (DWT)..................................... 20
2.3.1 Introduction to DWT................................................................................ 20
2.3.2 DWT Applications....................................................................................23
2.3.3 DWT Data Compression...........................................................................23
2.4 THE PIECEWISE AGGREGATE APPROXIMATION (PAA).................. 25
2.4.1 Introduction to PAA..................................................................................25
2.4.2 PAA Applications..................................................................................... 26
2.4.3 PAA Data Compression............................................................................ 27
CHAPTER 3: OUR PROPOSED REVERSIBLE DATA COMPRESSION METHOD.
29
3.1 Random Hyperplane Projection...................................................................29
3.2 Compression Phase......................................................................................31
3.3 Decompression Phase.................................................................................. 32
CHAPTER 4: TOSSIM SHOWCASE......................................................................... 33
4.1 Introducing TOSSIM................................................................................... 33
4.2 TOSSIM Configuration............................................................................... 33
CHAPTER 5: DATASETS, ALGORITHMS, AND EVALUATION METRICS........ 36
5
Reversible Data Summaries and their Effect on Mining Sensor Data Streams
5.1 Datasets and Data Preprocessing.................................................................36
5.2 Machine Learning Algorithms.....................................................................37
5.3 Metrics and Evaluation................................................................................43
CHAPTER 6: PERFORMANCE COMPARISON AND RESULTS........................... 47
6.1 Clustering Results............................................................................................. 47
6.1.1 K-means Results....................................................................................... 47
6.1.2 DBSCAN Results..................................................................................... 50
6.2 Classification Results........................................................................................ 52
6.2.1 SVM Results.............................................................................................52
6.2.2 Neural Network Results............................................................................55
6.2.3 KNN Results.............................................................................................58
6.3 Linear Regression Results.................................................................................59
6.4 Additional Experiments.....................................................................................62
6.4.1 Additional Clustering Results...................................................................63
6.4.2 Additional Classification Results............................................................. 64
6.4.3 Additional Linear Regression Results...................................................... 65
6.5 TOSSIM Simulation Results.............................................................................66
6.6 Future Work and Considerations.......................................................................72
BIBLIOGRAPHY.........................................................................................................73
