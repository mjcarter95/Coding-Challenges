#include <stdio.h>
#include <stdlib.h>

long factorial(long num)
{
  if(num==0)
    return 1;
  else
    return(num * factorial(num-1));
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
