
## Academic Reference

The algorithm we are proposing to implement is Boyer Moore's exact algorithm (https://www.sciencedirect.com/science/article/pii/030439759290133Z?via%3Dihub). 

## Algorithm Summary

Boyer-Moore algorithm is specifically designed for searching string or text. It runs faster as the pattern length increases. It is efficient to use for long patterns or mismatches between the pattern and the text. It preprocesses the string that is being searched for, and then it uses this information to skip sections of the string. The algorithm matches on the tail to the pattern rather than the head, which jumps multiple characters of the string rather than a single character.

## Function I/O

The inputs that will be used in our project are txt files of various lengths. The only inputs used will be the txt files. The algorithm will take in these files and return the location of the string that will be searched. If there are repeats of the string in the input, the algorithm will return the location of the first occurrence. If the string is not found in the input, -1 will be returned to reflect this. The tests will ensure that the algorithm is returning the correct position of the first occurrence(if it does exist). The txt files will not be changed before the algorithm will take them in. We will first implement the algorithm itself so that it can work on strings that the user will generate. We will then work on giving our program the ability to take in the txt files so that the algorithm can be applied to much larger datasets. We will also include an additional test case that will ensure that the program is able to properly read a text file by having it return the string that is on the file. 


## Data Description

The data that we will use will be txt files that we will create. One file will be empty, and the rest will be of increasing sizes. For each file of a certain size, a separate file will be created that will also fall in the same size group but contain duplicates. 
