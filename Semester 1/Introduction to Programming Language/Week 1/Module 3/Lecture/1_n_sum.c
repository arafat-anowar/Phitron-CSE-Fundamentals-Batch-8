#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int sum=0;
    // for (int i = 1; i <=n; i++)
    // {
    //     sum+=i;
    // }
    // printf("%d",sum);

    // int i=1;
    // while (i<=n)
    // {
    //     sum+=i;
    //     i++;
    // }
    // printf("%d",sum);

    int i=1;
    do
    {
        sum+=i;
        i++;
    }while (i<=n);
    printf("%d",sum);
    
    
    return 0;
}