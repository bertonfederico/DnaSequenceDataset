# DnaSequenceDataset
 ![background1](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/2a1f2b1a-6d8f-4127-b68c-6d037e1e5102)

## Introduction
### Purpose of the program
> [!IMPORTANT]
> * ***Scope***: detection of frequent k-mers given a dataset of DNA sequences (SPRISS study);
> * ***Problem***: high resources used (execution time and memory) by the search algorithm;
> * ***Resolution***: uniform random sampling of the initial dataset
>   * decrease in the cardinality of the dataset to be analyzed and thus in the resources used by the search algorithm;
> * ***Objective***: development and analysis of the sampling algorithm;

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
		<td width=40%><img src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/d79e5e11-00c8-4ee5-af78-e8f906e4945a"> </td>
		<td>m = 1007050</td>
	</tr>
 	<tr align="center">
  		<td>Parameter n</td>
		<td>n ∈ [1, m]</td>
		<td>k ∈ {100705, 251763, 503525, 755288}</td>
	</tr>
 	<tr align="center">
  		<td>Parameter k</td>
		<td>k > 0</td>
		<td>k ∈ {1, 10, 100, 1000, 10000, 100000, 1000000}</td>
	</tr>
</table>

### Pseudocode
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/f49dac47-ce19-4074-9d9e-1e02b1bee3ac)

### CLI & GUI C++ files
<table align="center">
	<tr align="center">
  		<th>GUI version</th>
		<th>CLI version</th>
	</tr>
 	<tr align="center">
  		<td width=45%><img src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/b5aeae09-5bd0-4861-accd-8644af8316c6"> </td>
		<td width=55%><img src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/a6896b21-40a0-49e5-84c5-2ac130435a5c"> </td>
	</tr>
</table>

* ***File main.h/.cpp (GUI)***: class to start the application GUI;
* ***Files main.cpp (CLI) and mainwindow.h/.cpp (GUI)***: classes to request input data and process it;
* ***File run_algorithm.h/.cpp***: class to run the different types of algorithm and output the necessary log files and .csv files;
* ***Files algorithm_iterate.h/.cpp and algorithm_massive.h/.cpp***: classes that run the actual sampling algorithm;
* ***File common.h***: header files containing useful structures and methods common to multiple classes;
* ***File mainwindow.ui (GUI)***: file defining the graphical structure of the application interface.

### Output data
Once input parameters are established, outputs are created in two different forms:
* based on the read and write mode of input and output files:
	* ***massive reading-writing version***: it writes into memory (in a supporting data structure) all the records in the source dataset, samples them by writing selected records into memory (in a second data structure), and only then writes them massively into the output file;
 	* ***iterated reading-writing version***: it reads the record from the initial dataset only at the time when the algorithm needs it (during the sampling procedure), and at the same time writes the record to the output file, thus not keeping all input and output records in memory;
* based on the number of rows in the output for each record:
	* ***full version***: all four rows for each input record will appear in the output;
	* ***patial Version***: in output will report the only significant row (the third one) for each incoming record;

The output of the program execution consists of the following files:
<table align="center">
	<tr align="center">
  		<th>Output name</th>
		<th>Contents</th>
		<th>Sample image</th>
	</tr>
	<tr align="center">
  		<td width=15%><em><strong>executionTimesWall.csv (total time) & executionTimesCPU.csv (CPU time only)</strong></em></td>
		<td width=30%>They contain all the results in terms of execution time in tabular form</td>
		<td width=55%><img src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/613e6fd9-da2d-43f5-9ff3-009e2511b0b3"> </td>
	</tr>
 	<tr align="center">
  		<td width=15%><em><strong>parameterChanges.csv</strong></em></td>
		<td width=30%>It contains the evolution of the parameters <em><strong>n, m, c</strong></em> and the duplicate records at each iteration for all possible values of <em><strong>k</strong></em></td>
		<td width=55%><img src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/cedc3d7d-6840-4b00-9f51-baff05e5b65d"> </td>
	</tr>
	<tr align="center">
  		<td width=15%><em><strong>inputRecordSelected.csv</strong></em></td>
		<td width=30%>It contains the input records read in tabular form for each combination of input parameters and for each version of algorithm used</td>
		<td width=55%><img src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/2623a67f-6d72-46c5-8ece-a6e4a5f814b4"> </td>
	</tr>
</table>

Once the output directory is chosen, the processed files will be found as follows:
<p align="center">
	<img width=60% src="https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/80b74ef8-1499-4336-a7e2-b973dff3ab2f">
</p>


## Computational complexity
### Theoretical complexity
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/d3125d78-440e-4b05-a763-44d4a749875c)

### Effective complexity
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/ebf9cd85-09cb-40ed-b491-95bbd6f34fb1)


## Choice of *n* and *k* values for correctness
### Purpose: analysis of the entire input dataset
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/d4b22b6a-8021-487d-a131-206f8f72de3b)

### Purpose: containment of multiple writing of the same record
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/fd5fb370-1b3c-4433-8d25-5dc1148db0d4)

### Purpose: homogeneity of writing by iteration
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/697537c1-4d24-4f66-95cf-8e39623f731a)


## Conclusion
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/d206d15b-d2f8-44d3-97bd-38cca0583516)
