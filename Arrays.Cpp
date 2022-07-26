// An array is a grouping of variables of the same type into contiguous blocks of memory
// This Data Structure is especially useful in applications when there are many variables of the same type that are related to eachother.
// Consider the example of having to store the three coordinates of a point in space (coordinates x,y, and z).
// A valid way you can store these coordinates in variables is:

`
 11 int main() {
 10   int xCoordinate = 1;
  9   int yCoordinate = 2;
  8   int zCoordinate = 3;
  7 }
`
// While this is okay, especially for a smaller number of coordinates, it will become harder to manage  as the number of coordinates increases. 
// A solution to this problem is to store the coordinates in a data structure called an *array* like so:

`
int main() {
  int coordinates[3] = {1, 2, 3};
}

`

/*
 This piece of code declares a variable of type array called coordinates. Since the three coordinates are related to each other and are likely to be used together frequently, the coordinates array neatly stores them into one variable. We will explore how to access and manipulate the elements of an array in future exercises. Under the hood, the coordinates variable creates three int variables in memory which are stored contiguously. As a visual representation, you may think of arrays as a group of lockers, not unlike those found in a gym, where each locker is responsible for storing one variable of type int (or any other variable type you have learned about so far).
 */


