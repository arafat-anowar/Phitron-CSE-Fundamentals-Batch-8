#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            printf(" ");
        }
        space--;

        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        num++;
        printf("\n");
    }

    return 0;
}