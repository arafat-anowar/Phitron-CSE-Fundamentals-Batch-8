#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int array_a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array_a[j]);
        }

        int array_b[n];
        for (int j = 0; j < n; j++)
        {
            array_b[j] = array_a[j];
        }

        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (array_b[j] > array_b[k])
                {
                    int tmp = array_b[j];
                    array_b[j] = array_b[k];
                    array_b[k] = tmp;
                }
            }
        }

        int array_c[n];
        for (int j = 0; j < n; j++)
        {
            array_c[j] = array_a[j] - array_b[j];
        }

        for (int j = 0; j < n; j++)
        {
            printf("%d ", abs(array_c[j]));
        }
        printf("\n");
    }

    return 0;
}