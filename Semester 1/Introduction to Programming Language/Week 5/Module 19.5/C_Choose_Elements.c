#include <stdio.h>


long long int sort(int array[], int n)
{
    long long int max = 0;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            if (array[i] > max)
            {
                max = array[i];
                idx = i;
            }
        }
    }
    array[idx] = 0;
    return max;
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    long long int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        long long int summation = sort(array, n);
        sum += summation;
    }

    printf("%lld", sum);
    return 0;
}