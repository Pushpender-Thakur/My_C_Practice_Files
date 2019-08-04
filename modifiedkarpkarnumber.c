// https://www.hackerrank.com/challenges/kaprekar-numbers/problem

#include <stdio.h>
#include <math.h>
int main(void)
{
  unsigned int long long lower, upper;
  scanf("%llu%llu", &lower, &upper);
  unsigned int long long start = lower;
  int haveNum = 0;
  while (start <= upper)
  {
    unsigned int long long temp = start;
    int count = 0;
    while (temp != 0)
    {
      count++;
      temp = temp / 10;
    }

    unsigned long long int square = start * start;

    unsigned int long long right = 0, left = 0;
    unsigned int r = 0;

    int tempcount = 0;

    while (tempcount < count)
    {
      r = square % 10;
      right = (pow(10, tempcount) * r) + right;
      square = square / 10;
      tempcount++;
    }

    if (right != 0)
    {
      tempcount = 0;
      while (square != 0)
      {
        r = square % 10;
        left = (pow(10, tempcount) * r) + left;
        square = square / 10;
        tempcount++;
      }

      if (right + left == start)
      {
        haveNum = 1;
        printf("%llu ", start);
      }
    }

    start++;
  }

  if (haveNum == 0)
  {
    printf("INVALID RANGE");
  }

  printf("\n");

  return 0;
}