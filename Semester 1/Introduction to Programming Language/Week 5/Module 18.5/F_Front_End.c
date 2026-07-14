#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        printf("%d ", array[i]);
        if (i < j)
        {
            printf("%d ", array[j]);
        }

        i++;
        j--;
    }

    return 0;
}