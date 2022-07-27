// Element Access in Multidimensional Arrays



// Elements in a Multidimensional array are accessed in like so: 

array[rowNumber - 1][columnNumber - 1];


// Similar to their single dimension counterparts, the first row is at index 0, the nth row is at index n-1, and the last row is at index firstDim - 1. This is the same for the columns too.

// Consider this example of a three-by-three matrix of integers:

int mat[][3] = {{19, 6, 7}, {20, 3, 17}, {16, 13, 10}};

// To access the element on the second row and third column, we write mat[1][2] (in this case it’s 17).
// Looping through a multidimensional array is similar to looping through a single dimension array with the slight difference that having multiple dimensions will require nested loops. While you can use nested while loops, it is better to use a nested for loop. 
// In the two-dimensional case, the outer loop goes through the rows and the inner loop goes through the columns:

int mat[3][3] = {{12, 8, 2}, {17, 19, 5}, {6, 11, 2}};
 
for(int i = 0; i < 3; i++){
  for(int j = 0; j < 3; j++){
    int num = mat[i][j];
    printf("%i\n", num);
  }
}


// To prevent the hardcoding of dimensions in a loop, the sizeof() function is used as follows:

// - rowDimension = sizeof(matrix)/sizeof(matrix[0]);
// - columnDimension = sizeof(matrix[0])/sizeof(dataType);

// Let’s use these identities to write the for loop from the previous exercise:

int mat[3][3] = {{12, 8, 2}, {17, 19, 5}, {6, 11, 2}};

int rowDimension = sizeof(mat)/sizeof(mat[0]);
int columnDimension = sizeof(mat[0])/sizeof(int);

for(int i = 0; i < rowDimension; i++){
  for(int j = 0; j < columnDimension; j++){
    int num = mat[i][j];
    printf("%i\n", num);
  }
}

//
