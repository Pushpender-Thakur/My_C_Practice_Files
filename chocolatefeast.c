// https://www.hackerrank.com/challenges/chocolate-feast/problem

#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int totalMoney, perPrice, wrappersToChoco, chocoEat = 0;
        scanf("%d%d%d", &totalMoney, &perPrice, &wrappersToChoco);
        if (totalMoney >= perPrice)
        {
            chocoEat += totalMoney / perPrice;
            int wrapperLeft = chocoEat;
            while (wrapperLeft >= wrappersToChoco)
            {
                chocoEat += wrapperLeft / wrappersToChoco;
                wrapperLeft = (wrapperLeft / wrappersToChoco) + (wrapperLeft % wrappersToChoco);
            }
        }

        printf("%d\n", chocoEat);
    }
    return 0;
}