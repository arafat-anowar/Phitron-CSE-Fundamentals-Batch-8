#include<stdio.h>

void fun(int* a){
    *a=1;
}

int main()
{
    int x;
    scanf("%d",&x);
    fun(&x);
    printf("%d",x);
    return 0;
}