# DnaSequenceDataset
 ![background1](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/2a1f2b1a-6d8f-4127-b68c-6d037e1e5102)

## Introduction
### Purpose of the program 
* ***Scope***: detection of frequent k-mers given a dataset of DNA sequences (SPRISS study);
* ***Problem***: high resources used (execution time and memory) by the search algorithm;
* ***Resolution***: uniform random sampling of the initial dataset
  * decrease in the cardinality of the dataset to be analyzed and thus in the resources used by the search algorithm;
* ***Objective***: development and analysis of the sampling algorithm;

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
		<td width=40%><img src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/d79e5e11-00c8-4ee5-af78-e8f906e4945a"</img> </td>
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
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/f49dac47-ce19-4074-9d9e-1e02b1bee3ac)

### CLI & GUI C++ files
* ***File main.h/.cpp (GUI)***: class to start the application GUI;
* ***Files main.cpp (CLI) and mainwindow.h/.cpp (GUI)***: classes to request input data and process it;
* ***File run_algorithm.h/.cpp***: class to run the different types of algorithm and output the necessary log files and .csv files;
* ***Files algorithm_iterate.h/.cpp and algorithm_massive.h/.cpp***: classes that run the actual sampling algorithm;
* ***File common.h***: header files containing useful structures and methods common to multiple classes;
* ***File mainwindow.ui (GUI)***: file defining the graphical structure of the application interface.


## Computational complexity
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/d3125d78-440e-4b05-a763-44d4a749875c)

## Choice of *n* and *k* values for correctness
### Purpose: analysis of the entire input dataset
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/d4b22b6a-8021-487d-a131-206f8f72de3b)

### Purpose: containment of multiple writing of the same record
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/fd5fb370-1b3c-4433-8d25-5dc1148db0d4)

### Purpose: homogeneity of writing by iteration
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/0da6d91c-d079-4756-9318-fab0a49f1436)


## Conclusion
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/d206d15b-d2f8-44d3-97bd-38cca0583516)
