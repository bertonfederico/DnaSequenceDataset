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
		<td>![image](https://github.com/bertonfederico/DnaSequenceDataset/assets/105301467/145b51db-e836-4fa4-b269-bb90f8ad5f33)
</td>
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
