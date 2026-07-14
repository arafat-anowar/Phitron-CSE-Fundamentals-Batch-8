#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n == m)
    {
        int matrix[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }
        int pri = 0;
        int sec = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                {
                    pri += matrix[i][j];
                }
                if (i + j == n - 1)
                {
                    sec += matrix[i][j];
                }
            }
        }
        printf("%d\n%d", pri, sec);
    }

    return 0;
}