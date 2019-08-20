// https://www.hackerrank.com/challenges/the-grid-search/problem

#include <stdio.h>
int occuredAt(char g[], char p[], int C, int c, int start);
int main(void)
{
    int t;
    scanf(" %d", &t);
    while (t--)
    {
        int ROW, COL, row, col, i;
        scanf(" %d%d", &ROW, &COL);

        // Main Array
        char MainArr[ROW][COL + 1];
        for (i = 0; i < ROW; i++)
        {
            scanf(" %s", MainArr[i]);
        }

        scanf(" %d%d", &row, &col);

        // toBeSearch
        char toBeSearch[row][col + 1];
        for (i = 0; i < row; i++)
        {
            scanf(" %s", toBeSearch[i]);
        }

        int indices[1000];
        int index;

        int isFound = 0;

        for (i = 0; i <= ROW - row; i++)
        {
            int point = occuredAt(MainArr[i], toBeSearch[0], COL, col, 0);

            if (point != -1)
            {
                index = 0;
                while (point != -1)
                {
                    indices[index] = point;
                    index++;
                    point = occuredAt(MainArr[i], toBeSearch[0], COL, col, point + 1);
                }

                int j;
                for (j = 0; j < index; j++)
                {
                    isFound = 1;
                    int x = i + 1, y = 1;
                    while (y < row)
                    {
                        int temp = occuredAt(MainArr[x], toBeSearch[y], COL, col, indices[j]);
                        if (temp != indices[j])
                        {
                            isFound = 0;
                            break;
                        }

                        x++, y++;
                    }

                    if (isFound != 0)
                    {
                        break;
                    }
                }
            }

            if (isFound == 1)
            {
                break;
            }
        }

        if (isFound == 0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }

        printf("\n");
    }
    return 0;
}

int occuredAt(char g[], char p[], int C, int c, int start)
{
    int FoundAt = -1;
    int i;
    for (i = start; i <= C - c; i++)
    {
        if (g[i] == p[0])
        {
            FoundAt = i;
            int x = i + 1, y = 1;
            while (p[y] != '\0')
            {
                if (g[x] != p[y])
                {
                    FoundAt = -1;
                    break;
                }

                x++, y++;
            }

            if (FoundAt != -1)
            {
                return FoundAt;
            }
        }
    }

    return FoundAt;
}