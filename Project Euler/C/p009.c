/*
 * Solution to Problem 9 on Project Euler
 * https://projecteuler.net/problem=9
 */

#include <stdio.h>

int main()
{

  const int limit = 1000;
  int a, b, c;

  for(a = 1; a < limit; a++) {
    for(b = a + 1; b < limit; b++) {
      c = limit - a - b;

      if(((a * a) + (b * b)) == (c * c)) {
        printf("========\nSolution\n========\n");
        printf("a: %d\nb: %d\nc: %d\n", a, b, c);
        printf("========\n");
        printf("Product: %d", a*b*c);
      }
    }
  }

  return 0;
}
