# Casting Types

- Sometimes you need to change the *type* of a *variable*.
- for instance you may need to change from a variable type int to a variable type of double
- this would not work:


int a;
double b = 3.0;
  a = b;


- There are two types of conversions, *implicit* and *explicit*. When you set one variable to be the same as another, such as a = b above, but their types do not match, the compiler will try to convert them. However, this can be dangerous as you might not know what values will be in the variable at runtime, and it might not be implicitly convertible to another type. Our example above was *implicit*, the compiler in this case will make a best guess.

- The other way to convert a variable from another type is *explicitly*. You can do this by simply telling the compiler what type you want to set it to. So in our example above we could change the line a = b to a = (int)b. That way if b was something other than 3.0, such as 3.2, we are telling the compiler to make it work, so it would set it to 3.

## Casting Types Continued

- A more interesting casting option is converting a char to a number type, or the other way around. Just like before, you have to be careful how you set this up. In the back-end, a char doesn’t store 'a', it stores the value representing that: 97 for lowercase and 65 for uppercase.

int targetInt;
char sourceChar = 'a';
targetInt = (int)sourceChar;

- Now `targetInt` equals 97.
- When you cast an `int` to a `char`, you get the opposiste process and the char is set to the value at the `int` value. So if you did:

int sourceInt = 65;
char targetChar;
targetChar = (char)sourceInt;
