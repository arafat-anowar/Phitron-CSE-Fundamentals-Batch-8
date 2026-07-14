#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m)
    {
        printf("NO");
        return 0;
    }

    int matrix[n][m];
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (matrix[i][j] != 1)
                {
                    flag = 1; 
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    flag = 1; 
                }
            }
        }
    }

    if (flag == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
