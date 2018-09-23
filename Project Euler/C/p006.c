/*
 * Solution to Problem 6 on Project Euler
 * https://projecteuler.net/problem=6
 */

#include <stdio.h>

/* Calculate sum of the squares of n numbers */
int sum_of_squares(int n)
{
  int sum = 0;
  for(int i = 0; i <= n; i++) {
    sum += i * i;
  }
  return sum;
}

/* Calculate square of the sum of n numbers */
int square_of_sum(int n)
{
  int sum = 0;
  for(int i = 0; i <= n; i++) {
    sum += i;
  }
  return sum * sum;
}

int main()
{
  const int limit = 100;
  int sum_square = sum_of_squares(limit);
  int square_sum = square_of_sum(limit);
  int difference = square_sum - sum_square; // Calculate difference between square of the sums and sum of the squares

  printf("Sum of the squares %d\n", sum_square);
  printf("Square of the sum %d\n", square_sum);
  printf("The difference between the sum square and suqared sum of the first %d numbers is: %d", limit, difference);

  return 0;
}
