# DnaSequenceDataset
 
![tog](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/375cb744-3c7b-44f7-bc64-e25b4fe6a70b)

## Introduction
### Purpose of the program 
* **Scope** ➡ &rarr detection of frequent k-mers given a dataset of DNA sequences (SPRISS study);
* **Problem** ➡ high resources used (execution time and memory) by the search algorithm;
* **Resolution** ➡ uniform random sampling of the initial dataset ➡ 
  * decrease in the cardinality of the dataset to be analyzed and thus in the resources used by the search algorithm;
* **Objective** ➡ development and analysis of the sampling algorithm;

## Developement
### Algorithm input parameters
<table align="center">
	<tr align="center">
  		<th></th>
		<th>Description</th>
		<th>Values for testing</th>
	</tr>
	<tr align="center">
  		<td>Dataset D</td>
		<td width=40%><img src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/fb37ce7f-a3dd-401b-a6b7-9f1f5a8f781a" </img> </td>
		<td>m = 1007050</td>
	</tr>
 	<tr align="center">
  		<td>Parameter n</td>
		<td>n ∈ [1, m]</td>
		<td>k ∈ {100705, 251763, 503525, 755288}</td>
	</tr>
 	<tr align="center">
  		<td>Parametro k</td>
		<td>k > 0</td>
		<td>k ∈ {1, 10, 100, 1000, 10000, 100000, 1000000}</td>
	</tr>
</table>

### Pseudocode
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/09fac551-c03e-49c7-8142-9eba70e36b1f)

### CLI & GUI C++ files
* File main.h/.cpp (GUI): class to start the application GUI;
* Files main.cpp (CLI) and mainwindow.h/.cpp (GUI): classes to request input data and process it;
* File run_algorithm.h/.cpp: class to run the different types of algorithm and output the necessary log files and .csv files;
* Files algorithm_iterate.h/.cpp and algorithm_massive.h/.cpp: classes that run the actual sampling algorithm;
* File common.h: header files containing useful structures and methods common to multiple classes;
* File mainwindow.ui (GUI): file defining the graphical structure of the application interface.


## Computational complexity
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/67927a1b-4400-4d9b-913a-7f38056a03e4)

## Choice of n and k values for correctness
### Purpose: analysis of the entire input dataset
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/70fa56e5-67a9-4b41-9a66-6157351aa0d8)

### Purpose: containment of multiple writing of the same record
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/ecbdd8ac-4342-4eda-93ea-3f84a8f08d61)

### Purpose: homogeneity of writing by iteration
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/7b8ecb97-c40e-471f-88ff-120527ce76a2)


## Conclusion
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/639193d6-717c-4949-889d-a14a2c192119)




