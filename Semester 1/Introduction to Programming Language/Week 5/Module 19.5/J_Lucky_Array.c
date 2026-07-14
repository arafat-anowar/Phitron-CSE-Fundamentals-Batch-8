#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (min == array[i])
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}