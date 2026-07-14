#include <stdio.h>

void shift_zero(int array[], int n)
{
    int pos = 0;

        for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            array[pos] = array[i];
            pos = pos + 1;
        }
        for (int i = pos; i < n; i++)
        {
            array[i] = 0;
        }
    }
}
    int main()
    {
        int n;
        scanf("%d", &n);

        int array[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        shift_zero(array, n);

        for (int i = 0; i < n; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");

        return 0;
    }
