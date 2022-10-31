// Intro To Logical Operators
//
// Often, when we are trying to create a control flow for our program, we’ll encounter situations where the logic cannot be satisfied with a single condition.
//
// Logical Operators are used to combine two or more conditions. They allow programs to make more flexible decisions. The result of the operation of a logical operator is a `bool` value of either `true` or `false`
//
// There are 3 Logical operators we will cover
//
// `&&`: The `and` logical operator
// `||`: The `or` logical operator
// `!`:  The `not` logical operator


#include <iostream>

int main() {

  int hunger = true;
  int anger = true;

  // Write the code below:
  if (hunger && anger) {

    std::cout << "Hangry!\n";

  }

}
