#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        printf("a is grater than b");
    }
    else if (a==b)
    {
        printf("Equals");
    }
    else{
        printf("a is less than b");
    }
    return 0;
}