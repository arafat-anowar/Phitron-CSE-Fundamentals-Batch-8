#include <stdio.h>

long long int sum(int array[], int i, int n, long long int summation)
{
    if (i == n)
    {
        return summation;
    }

    summation += array[i];
    return sum(array, i + 1, n, summation);
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

    long long int summation = sum(array, 0, n, 0);
    printf("%lld", summation);
    return 0;
}