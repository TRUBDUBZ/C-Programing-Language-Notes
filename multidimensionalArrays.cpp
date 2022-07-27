// Multidimensional Arrays C++


// arrays can contain any kind of data type, be it an int, char, or anything else

// Interestingly, arrays can also store other arrays! An array containing other arrays is known as a *multidimensional array*
// These kinds of arrays are frequently used in mathematical applications that involve maatrices and vectors. Similar to its single dimension counterpart, a multidimensional array can be initialized or uninitialized upon its creation.

// The following is a two-dimensional array of integers called mat which represents a three-by-four matrix:

int mat[3][4];

// The previous code indicates that array `mat` contains three elements each of which is an array that conatains four integers.
// To visualize this, consider a row of three lockers, in which each locker contains four sub-lockers that someone can store items in.
// To illustrate how to create an initialized multidimensional array, we will create a two-by-three multidimensional array called `mat2` composed of random integers

int mat[][3] = {{1, 6, 3}, {5, 9, 2}};

// Just like in the single dimension case, the array is initialized by placing elements between {} brackets.
//  In this case, the elements inside the outermost brackets are arrays of three elements each.
//  It is important to note that while the two-by-three dimension can be inferred from the right-hand side of the expression, the only dimension that can be omitted is the first (notice the first [] is empty); all others must be supplied. The array mat2, represents this table

// While it is possible to have a theoretically infinite number of dimensions, in practice, dimensions greater than two are very rare. For a two-dimensional matrix, the first dimension represents the number of rows and the second dimension represents the number of columns.

// Create a two-dimensional nine-by-nine uninitialized array of integers called arr. 

#include<stdio.h>

int main() {
  
  int arr[9][9];

// Given the following table: (https://www.codecademy.com/courses/learn-c/lessons/arrays-c/exercises/multidimensional-arrays)
// Create an initialized two-dimensional array called matrix that represents it.

#include<stdio.h>

int main() {

  int arr[9][9];
int matrix[][3] = {{2, 9, 11}, {3, 1, 4}, {8, 3, 1}}; 
}

 
