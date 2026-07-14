#include <stdio.h>

void print_num(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i > 1 && i <= x)
        {
            printf(" ");
        }

        printf("%d", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    print_num(n);
    return 0;
}