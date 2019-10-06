/*
 * Solution to Problem 1 on Project Euler
 * https://projecteuler.net/problem=1
 */

#include <stdio.h>

int main()
{

  const int limit = 1000;
  int n;
  long sum = 0;

  for(n = 1; n < limit; n++) {
    if (n % 3 == 0 || n % 5 == 0) {
      sum = sum + n;
    }
  }

  printf("%d",sum);

  return 0;
}
