/*
 * Solution to Problem 2 on Project Euler
 * https://projecteuler.net/problem=2
 */

#include <stdio.h>

int main()
{

  const int limit = 4000000;
  int a = 0, b = 1, c;
  int sum = 0;

  while (a < limit) {
    if(c % 2 == 0)
      sum += c;

    c = a + b;
    a = b;
    b = c;
  }

  printf("Solution: %d", sum);

  return 0;

}
