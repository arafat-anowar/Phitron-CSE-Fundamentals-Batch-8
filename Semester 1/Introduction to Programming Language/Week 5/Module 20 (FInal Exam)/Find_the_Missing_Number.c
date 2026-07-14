#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int mul;
        int a, b, c;
        scanf("%lld %d %d %d", &mul, &a, &b, &c);
        long long int val = (long long int)a * b * c;
        if (mul / val * val == mul)
        {
            printf("%d\n", mul / val);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}