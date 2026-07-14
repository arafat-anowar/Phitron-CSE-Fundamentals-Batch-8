#include <stdio.h>

void factorial(int i, long long int fac, int n)
{
    if (i > n)
    {
        printf("%lld", fac);
        return;
    }
    fac = fac * i;
    factorial(i + 1, fac, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    factorial(1, 1, n);
    return 0;
}