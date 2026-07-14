#include<stdio.h>

int main()
{
    int test;
    scanf("%d",&test);

    for (int i = 1; i <=test; i++)
    {
        int num;
        scanf("%d",&num);
        if (num==0)
        {
           printf("0\n");
           continue;
        }
        
        int d=num;
        while (d!=0)
        {
            int l_d=d%10;
            printf("%d ",l_d);
            d=d/10;
        }
        printf("\n");
    }
    
    return 0;
}