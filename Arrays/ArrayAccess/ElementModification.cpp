// Array Access and Element Modification


// Array elements can be accessed, modified, and used just like any other variable of the same data type.
// The following shows how to acess an element in an array at index `idx`:
`arr[idx]`

// The first element in an array has index 0 and the last element in an array has index `arraySize-1`
// The nth element is at index n-1, so, for example, the third element would be at index 2.

// An element in an array is modified just like a regular variable
arr[idx] = newValue

// Remember to be consistent with the data types! For example, elements of an array of integers can only be modified to represent other integer values; anything else will cause errors
// When working with arrays, it is important to be careful and not attempt to access an element at an index greater than arraySize - 1 as the memory located there could be storing other data.
// Accessing an array at an index greater than arraySize - 1 will return a random value. Modifying an element at an index greater than arraySize - 1 will corrupt the data stored at that location, causing the program to behave in an unpredictable manner. The same is true for array access at indices less than zero

// The following piece of code changes an element in an array and assigns it to a lone variable:

#include<stdio.h>

int main() {
  int arr[] = {3,5,7,9}; // Array creation
      arr[2] = 6; // Modify the third element
      int x = arr[2]; // Assign the third element to the lone variable x
      prinftF("%i", x); // Print x
}


#include<stdio.h>

int main() {

  int evens[] = {2, 4, 6, 8, 10, 12};
  int odds[] = {1, 4, 5, 7, 9, 11}; // Do not modify this line.
  
  printf("%i\n", evens[5]); // Checkpoint 1. Fix this error.

  printf("%i\n", evens[2]); // Place the third element of the evens array

  odds[1] = 3;
  odds[4] = 9; 
}



