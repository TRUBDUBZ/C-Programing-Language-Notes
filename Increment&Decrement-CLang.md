# Increment And Decrement

- C has several shorthand tricks you can use to make your life easier. For instance, it is very common inside a loop to have a counter you want to increment (add 1) or decrement (subtract 1) on each pass. C lets you do this by using a double symbol such as:

    `int a = 1;`
    `a++;`

- This would now set the value in `a` to be 2. The shorthand for decrementing is  '--' instead of ++. So if we wanted to decrement `a`, it would be:

    `a--;`

## Assingment

    - It’s one thing to do all these operations, but if the results are thrown away as soon as the statement finishes executing, the entire process has limited usability. What we need is a way to assign values to variables. We have already seen the basic way to do this using =, but C offers some additional shorthand tricks for assignment.

    - Each of the basic math symbols you have learned in this lesson can be done in C with a shortcut. Let’s look at an example of two ways to write simple additions that would give you the same end result:

    `int a = 2;`
    `int b = 3;`
    `a = a + b;`

    - This could also be written as:

    `int a = 2;`
    `int b =3;`
    `a += b;`

- Notice that C lets us shorthand adding something to a variable’s starting value by using +=. You can do this same shorthand with -=, *=, /=, and %= for subtraction, multiplication, division, and modulo, respectively.
