# Diy lib String.h



#### Hello friend!



#### General description

The String.h lib is used a lot in handling strings inside C, based on that I decide to replicate the lib, I won't talk about all the functions as you should know how each one works, but I will talk about extra functions that are very useful to mine to see.



#### Description of extra functions



char toUpper(char c) - Receives a char and returns the uppercase version

char toLower(char c) - Receives a char and returns the lowercase version

void strToUpper(char *src) - Receives a char pointer and modifies all in uppercase

void strToLower(char *src) - Receives a char pointer and modifies all in lowercase

void toReverse(char *src) - Takes a char pointer and modifies it to a reverse version of the string

void removeCharDupli(char * str) - Receives a char pointer and removes chars with its previous equal

void removeNotChar(char * str) - Takes a char pointer and removes every character other than a letter or digit.



#### Considerations

This project was created with the goal of learning how to create libs from scratch, or even performing the ability to understand how the lib works. here are some observations:

- Do not use this lib in your project, unless it is for learning purposes.
- This lib does not fully reflect the functioning of the String.h lib.
- The correct thing to do in every string is to return a new string with its modifications because strings have the concept of being immutable.
- If you are going to use the extra functions, test them very well.