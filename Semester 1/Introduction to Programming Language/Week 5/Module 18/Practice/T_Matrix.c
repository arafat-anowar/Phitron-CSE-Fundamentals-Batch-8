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
    int seo_dia = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pri_dia += array[i][j];
            }
            else if (i + j == n - 1)
            {
                seo_dia += array[i][j];
            }
        }
    }
    printf("%d", abs(pri_dia) + abs(seo_dia));
    return 0;
}