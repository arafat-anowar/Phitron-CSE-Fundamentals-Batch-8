#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    if (num/1000%2==0)
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}