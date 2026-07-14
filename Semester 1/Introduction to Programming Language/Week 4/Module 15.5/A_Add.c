#include <stdio.h>

long long int sum(int a, int b)
{
    long long int sum = a + b;

    return sum;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    long long int summation = sum(x, y);

    printf("%lld", summation);

    return 0;
}