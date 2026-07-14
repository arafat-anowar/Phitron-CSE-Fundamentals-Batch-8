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

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] != 0)
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            printf("Zero Matrix");
        }
        else
        {
            printf("NOT");
        }
    }

    return 0;
}