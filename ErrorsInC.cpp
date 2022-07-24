// Errors In C

/* Errors are simply unavoidable when you develop a program, lets learn more about them
 Learning to code can be a frustrating endeavor because you are destined to encounter many red errors along the way. What makes a programmer successful isn’t avoiding errors — no programmer can avoid them. Great programmers understand that errors are part of the process, and they know how to find the solution to each while learning something new from them. In this article, we’ll teach you how to think about errors in your code a little differently.*/

 // there are many ways of classifying errrors. For example:
- Compile-time errors: Errors found by the compiler. We can further classify compile-time errors based on which language rules they violate: 
  - Syntax errors
  - Semantic errors
  
  - Link-time Error: errors found by the linker when it is trying to combine object files into an executbale program.
  - Logic-errors: errors found by the programmer looking for the cause of erroneous results else end
  

// Compile-time errors
/* When you are writing C programs, your compiler is your first line of defense against errors. Here are the two types of compile-time errors:

Syntax errors

These errors occur when an invalid statement is written. */

`
  int x = 6 // Error: missing a terminating semicolon
  Int x = 6;          // Error: Int is not a type
  printf("Error";    // Error: missing closing parenthesis
`

/*
Semantic Errors

These statements are syntactically valid but don't do what the programmer intends.
*/

`
a + b = c;  // Error: value required as left operand of assignment


int i;
i = i + 2;    // Error: use of an un-initialized variable
`
