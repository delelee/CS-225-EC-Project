
## Academic Reference

The algorithm we are proposing to implement is Boyer Moore's string search algorithm (https://www.sciencedirect.com/science/article/pii/030439759290133Z?via%3Dihub). 

## Algorithm Summary

The Boyer-Moore algorithm is specifically designed for searching for a pattern string in a text. The pattern string is aligned with the start of the text and compares its characters with those of the text from right to left. The algorithm continuously uses two preprocessing strategies simultaneously to decide if a shift is needed. These two strategies are bad character heuristics and good suffix heuristics. The strategy that gives the largest shift will be used for each turn. 

## Function I/O

There will be three parts to the algorithm. 

The first part will be used to implement the bad character heuristic. This will be a function that will preprocess the string so that the bad character strategy can be used in the algorithm. The bad character heuristic is used when there is a character in a text that does not occur in the pattern. When there is a mismatch in characters, the corresponding character in the text is marked as the "bad character", and the pattern string is shifted until the "bad character" from the text finds a match in the pattern string. If the "bad character" does not occur at all in the pattern string, then the pattern string will be shifted so that it starts its new comparisons to one after the "bad character". 

The second part will be used to implement the good character heuristic. This will be a function that will preprocess the string so that the good character strategy can be used in the algorithm. The good suffix heuristic is used when there is a partial match between the pattern string and text. The segment of the text that matches a part of the pattern string is marked. If there is a mismatch with the next comparision, the pattern string is shifted so that the marked segment will still be matching with the pattern string at the new location.   

Finally, the third part will be used to implement the actual algorithm. The text files that have been created will be taken into this function, and the first two functions will be performed on the input to implement the algorithm. The output of this function will be a positive integer that gives the first occurance of a specific pattern string that is looked for in the text file. A -1 is returned if there is no occurance of the pattern string. The validity of the code will be checked with text files that have multiple occurances of the pattern string. 


## Data Description

The data that we will use will be txt files that we will create. One file will be empty, and the rest will be of increasing sizes. For each file of a certain size, a separate file will be created that will also fall in the same size group but contain duplicates. The empty text file will ensure that the code will only return an appropriate value if the text has strings. The text files with the duplicate strings will ensure that only the first occurance of the pattern string is returned. 
