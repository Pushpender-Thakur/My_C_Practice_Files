// https://www.codechef.com/problems/COKE

#include <stdio.h>
int main(void)
{
    int t;
    scanf(" %d", &t);
    while (t--)
    {
        int NoOfCans, Minutes, Out_Temp, lower, upper, i;
        scanf(" %d%d%d%d%d", &NoOfCans, &Minutes, &Out_Temp, &lower, &upper);

        int Cans[NoOfCans][2];
        for (i = 0; i < NoOfCans; i++)
        {
            scanf(" %d%d", &Cans[i][0], &Cans[i][1]);
        }

        int min = -1;

        for (i = 0; i < NoOfCans; i++)
        {
            int AtLastTemp;

            if (Cans[i][0] > Out_Temp)
            {
                if (Cans[i][0] - Minutes <= Out_Temp)
                {
                    AtLastTemp = Out_Temp;
                }
                else
                {
                    AtLastTemp = Cans[i][0] - Minutes;
                }
            }
            else if (Cans[i][0] < Out_Temp)
            {
                if (Cans[i][0] + Minutes >= Out_Temp)
                {
                    AtLastTemp = Out_Temp;
                }
                else
                {
                    AtLastTemp = Cans[i][0] + Minutes;
                }
            }
            else
            {
                AtLastTemp = Out_Temp;
            }

            //printf("%d\n", AtLastTemp);

            if (AtLastTemp >= lower && AtLastTemp <= upper)
            {
                if (min == -1)
                {
                    min = Cans[i][1];
                }
                else if (Cans[i][1] < min)
                {
                    min = Cans[i][1];
                }
            }
        }

        printf("%d\n", min);
    }
    return 0;
}