
#include <stdio.h>

void print(int n, int d)
{
    if (n == 0)
    {
        printf("0");
        return;
    }
    if (d == 0)
    {
        return;
    }
    print(n, d / 10);
    printf("%d ", d % 10);
}
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        if (i != 1)
        {
            printf("\n");
        }
        int num;
        scanf("%d", &num);
        int d = num;
        print(num, d);
    }

    return 0;
}
