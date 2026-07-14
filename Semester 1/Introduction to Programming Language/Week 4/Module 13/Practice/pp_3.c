#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int star=n;
    int space=0;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <space; j++)
        {
            printf(" ");
        }
        space++;

        for (int k = star; k >=1; k--)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }
    
    return 0;
}