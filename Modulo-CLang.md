# Modulo

- You may have run across modulo, symbolized as the percent symbol %, before. If not, or as a reminder, modulo performs division but instead of giving you the number of times the denominator goes into the numerator, it gives you the remainder after the division.

- As an example, if you took 10 / 3 you would get 3 with 1 left over. If you wanted to just get the remainder and didn’t care about the other part you would do 10 % 3. This would give you 1.

- A common use of modulo is determining if an integer is even or odd. If we have an integer, x, and aren’t sure if it’s even or odd, we can use modulo to see the remainder. If the result is 1, x is odd, otherwise it is even.
  
  `int main() {`
  
  `int endingDayOfWeek = 0;`
  `int daysThatPass = 2;`
  `int daysInWeek = 7;`

  `endingDayOfWeek = daysThatPass % daysInWeek;`
