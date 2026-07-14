#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    // // AND
    // if (a==1 && b==1)
    // {
    //     printf("1,1\n");
    // }
    // if (a==1 && b==2)
    // {
    //     printf("1,2\n");
    // }
    // if (a==2 && b==3)
    // {
    //     printf("2,3\n");
    // }
    
    // OR
    // if (a==1 || b==1)
    // {
    //     printf("1,1\n");
    // }
    // if (a==1 || b==2)
    // {
    //     printf("1,2\n");
    // }
    // if (a==2 || b==3)
    // {
    //     printf("2,3\n");
    // }

    // // NOT
    if (!a==1)
    {
        printf("1,1\n");
    }
    if (!b==0)
    {
        printf("1,2\n");
    }
    return 0;
}