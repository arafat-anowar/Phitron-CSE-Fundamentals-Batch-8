#include <stdio.h>
#include <limits.h>

int max_check(int array[], int i, int n, int max)
{
    if (i == n)
    {
        return max;
    }

    if (array[i] > max)
    {
        max = array[i];
    }
    return max_check(array, i + 1, n, max);
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

    int max = max_check(array, 0, n, INT_MIN);
    printf("%d", max);
    return 0;
}