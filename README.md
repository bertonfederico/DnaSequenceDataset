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

## Computational complexity
![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/67927a1b-4400-4d9b-913a-7f38056a03e4)



