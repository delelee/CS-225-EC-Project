
## Academic Reference

The algorithm we are proposing to implement is Boyer Moore's exact algorithm (https://www.sciencedirect.com/science/article/pii/030439759290133Z?via%3Dihub). 

## Algorithm Summary

Boyer-Moore algorithm is specifically designed for searching string or text. It runs faster as the pattern length increases. It is efficient to use for long patterns or mismatches between the pattern and the text. It preprocesses the string that is being searched for, and then it uses this information to skip sections of the string. The algorithm matches on the tail to the pattern rather than the head, which jumps multiple characters of the string rather than a single character.

## Function I/O

As described in our summary, there are two parts to our algorithm. 

1. `std::string preprocess(std::string infile, skipList & table)`
```
@param infile -- the absolute path to the preprocessed txt file
@param table -- a reference to a skipList object that is filled in during preprocessing
@return The input text read in from infile.
```

This function will create a skip table for use in the KMP algorithm. As this is the very first step in our algorithm, we decided to implement it to both build the skip table and read in the file at the same time. Accordingly, we take as input the absolute path to our file of interest and an empty skipList (a class object we will define in our code base). The function will populate the skipList and return the full text as one single string.

Our proposed tests (1 and 2) check that this function will correctly read in a file and correctly populate the skip table. In test 1, we take as input a file containing nothing but the letter 'A' and compare it to a pre-written skip table that we know is correct. In test 2, we do the same for an input file containing the full English alphabet once. Together this proves (on a small scale) that our preprocessing function is correct.

2. `std::vector<unsigned> KMP(std::string text, skipList & table, std::string pattern)`
```
@param infile -- the absolute path to the preprocessed txt file
@param table -- a reference to a skipList object that is filled in during preprocessing
@param pattern -- the string pattern being searched for in the textfile
@return A vector of unsigned integers storing the matching indices of all exact matches for the pattern in our text
```

This function will take as input the text and table produced by preprocessing as well as a pattern of interest. It will then perform the main KMP algorithm and return a collection of unsigned integers as a vector. 

Our proposed test (3) checks that this function will correctly search for a pattern of interest by directly checking that we find all 17 instances of the pattern 'dodos' in our text file. The word 'dodo' and 'dos' are present to make sure we are not accidentally returning partial matches. 

For both of our methods, we will write additional tests as part of the development process. **We understand that using our code output as a means of writing tests doesn't make sense and won't give us points unless we can prove we know the true answer through some other approach like manual calculations.**

## Data Description

Our test datasets were manually constructed so we could guarantee the correctness of our proposed tests. The actual datasets stored in `/data` consist of text copies of our favorite books, though we manually deleted title pages. We additionally replaced all pagebreaks with newlines so that the overall text file is a line separated list of strings. This replacement was done using a Python script (not included in this example proposal but would be included if you were doing it for real).
