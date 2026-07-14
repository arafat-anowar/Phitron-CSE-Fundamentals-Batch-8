#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int a=x++;
    printf("%d ",a);

    int b=++y;
    printf("%d",b);
    return 0;
}