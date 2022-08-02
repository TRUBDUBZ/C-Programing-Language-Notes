#include <iostream>
using namespace std;

int main() {
  cout << "Hello, World!" << endl;
  return 0;
}


// The hash sign (#) signifies the start of a preprocessor command. The #include command is a specific preprocessor command that effectively copies and pastes the entire text of the file specified between the angle brackets into the source code. In this case, the file is “iostream” which is a standard file that should come with the C++ compiler. This file name is short for “input-output streams”; in short, it contains code for displaying and getting the text from the user.

// The include statement allows a programmer to “include” this functionality in the program without having to literally cut and paste it into the source code every time. The iostream file is part of the C++ standard library, which provides a set of useful and commonly used functionality provided with the compiler. The “include” mechanism, however, can be used both for standard code provided by the compiler and for reusable files created by the programmer.

// C++ supports the concept of namespaces. A namespace is essentially a prefix that is applied to all the names in a certain set. One way to think about namespaces is that they are like toolboxes with different useful tools. The using command tells the compiler to allow all the names in the “std” namespace to be usable without their prefix. The iostream file defines three names used in this program - cout, cin, and endl - which are all defined in the std namespace. “std” is short for “standard” since these names are defined in the standard C++ library that comes with the compiler.

// Without using the *std namespace*, the names would have to include the prefix and be written as *std::cout*, *std::cin*, and *std::endl*. If we continue with the toolbox example, this code would be saying, “Use the cout, cin and endl tools from the std toolbox.”


