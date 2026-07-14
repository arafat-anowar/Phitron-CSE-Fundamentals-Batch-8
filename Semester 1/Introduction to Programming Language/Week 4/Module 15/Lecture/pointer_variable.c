#include<stdio.h>

int main()
{
    int x=10;
    printf("%p\n",&x);

    int* ptr;
    ptr=&x;
    printf("%p\n",ptr);

    printf("%d\n",*ptr);

    *ptr=101;
    printf("%d",x);
    return 0;
}