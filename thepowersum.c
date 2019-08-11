// https://www.hackerrank.com/challenges/the-power-sum/problem

#include <stdio.h>
#include <math.h>
int uniques(int x, int n, int count, int prev)
{
    int square = pow(x, (double)1 / n);
    if (square >= prev)
    {
        square = prev - 1;
    }

    while (square)
    {
        int diff = x - pow(square, n);
        if (diff == 0)
        {
            count++;
        }
        else
        {
            count = uniques(diff, n, count, square);
        }

        square--;
    }
    return count;
}
int main(void)
{
    int x, n;
    scanf("%d%d", &x, &n);
    int a = pow(x, (double)1 / n);

    printf("%d\n", uniques(x, n, 0, a + 1));

    return 0;
}