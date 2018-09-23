/*
 * Solution to Problem 2 on Project Euler
 * https://projecteuler.net/problem=2
 */

#include <stdio.h>

int fibonacci(int n)
{
  if(n==0)
    return 0;
  if(n==1)
    return 1;
  else
    return(fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
  int i = 0;
  int n;
  int sum = 0;
  const int limit = 4000000;

  while(n < limit)
  {
    n = fibonacci(i);

    if(n % 2 == 0) {
      sum += n;
    }

    i++;
  }

  printf("Sum of even fibonacci numbers: %d\n", sum);

  return 0;
}
