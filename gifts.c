// https://www.hackerrank.com/challenges/taum-and-bday/problem

#include <stdio.h>
int main(void)
{
  unsigned int q;
  scanf("%u", &q);
  while (q--)
  {
    unsigned int long long black, white, B_Price, W_Price, z;
    scanf("%llu%llu%llu%llu%llu", &black, &white, &B_Price, &W_Price, &z);
    unsigned int long long price = 0;

    if (B_Price > W_Price + z)
    {
      price = ((black + white) * W_Price) + (black * z);
      printf("%llu", price);
    }
    else if (W_Price > B_Price + z)
    {
      price = ((black + white) * B_Price) + (white * z);
      printf("%llu", price);
    }
    else
    {
      price = (black * B_Price) + (white * W_Price);
      printf("%llu", price);
    }

    printf("\n");
  }
  return 0;
}