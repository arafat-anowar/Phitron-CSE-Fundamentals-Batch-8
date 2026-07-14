#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int pri_dia = 0;
    int sec_dia = 0;

    // Primary Diagonal Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pri_dia += array[i][j];
            }
        }
    }

    // Secondary Diagonal Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sec_dia += array[i][j];
            }
        }
    }

    int dif = abs(pri_dia - sec_dia);

    printf("%d", dif);

    return 0;
}