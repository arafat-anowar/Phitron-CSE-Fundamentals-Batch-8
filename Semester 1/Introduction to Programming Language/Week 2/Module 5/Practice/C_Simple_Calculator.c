#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    printf("%d + %d = %lld\n",x,y,(long long int)x+y);
    printf("%d * %d = %lld\n",x,y,(long long int)x*y);
    printf("%d - %d = %lld",x,y,(long long int)x-y);
    return 0;
}