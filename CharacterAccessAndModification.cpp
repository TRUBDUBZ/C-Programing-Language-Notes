// Character Access and Modification


#include <stdio.h>

int main() {
  char p[] = "procezzor";
  // Checkpoint 1 code goes here
  // Checkpoint 2 code goes here
  printf("%s", p);
}

// The characters of a string are accessed using the same methods as those for a regular array.

// It’s important to note that since strings are arrays of characters, they are subject to all of the same constraints as an array. 

//  This means a string cannot be extended to add new characters, and a character in a string cannot be deleted!

// Recall from the lesson on Arrays that an element in an array is accessed like so:

arr[idx]

// In the case of strings, the index, idx, represents the character at that index. And just like arrays, the nth character is at index n-1. Here is an example:

char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
char str2[] = "Hello World";
 
printf("%c\n", str[6]); // "%c" required to instruct printf() that it is to expect a character.
printf("%c", str2[6]);

// The code above creates the string “Hello World” in both ways. str[6] and str2[6] will access the character at index six, which is the seventh character in both strings, respectively.


