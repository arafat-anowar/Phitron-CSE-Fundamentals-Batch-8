#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int star=n*2-1;
    int space=0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space++;

        for (int k = 1; k <=star ; k++)
        {
            printf("*");
        }
        star-=2;

        printf("\n");
    }
    
    return 0;
}