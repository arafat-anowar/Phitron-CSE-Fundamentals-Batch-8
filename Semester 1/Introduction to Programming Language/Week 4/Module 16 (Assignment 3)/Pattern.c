#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1;
    int high_pen = 1;
    int space = n - 1;
    for (int i = 1; i < n * 2; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int k = 1; k <= high_pen; k++)
            {
                printf("-");
            }
        }
        else
        {
            for (int k = 1; k <= hash; k++)
            {
                printf("#");
            }
        }

        printf("\n");

        if (i < n)
        {
            hash += 2;
            high_pen += 2;
            space--;
        }
        else
        {
            hash -= 2;
            high_pen -= 2;
            space++;
        }
    }

    return 0;
}