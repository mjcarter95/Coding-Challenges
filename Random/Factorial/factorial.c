#include <stdio.h>
#include <stdlib.h>

long factorial(long num)
{
  // Declare local variables
  int x;
  int n = num;

  // Loop through the values from n down to 1 and times n by x
  for(x=1; x < num; x++) {
    n = x * n;
  }

  return n;
}

int main(int argc, char *argv[])
{
  // Declare local variables
  int num;
  char *ptr;
  long n = strtol(argv[1], &ptr, 10);

  // Calculate factorial of input
  num = factorial(n);
  printf("Factorial of %d equals %d", n, num);

  return 0;
}
