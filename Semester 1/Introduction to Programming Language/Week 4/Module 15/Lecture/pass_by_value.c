#include<stdio.h>
void fun(int a){
    printf("%d\n",a);
    a=10;
    printf("%d\n",a);
}   

int main()
{
    int x;
    scanf("%d",&x);
    fun(x);
    printf("%d",x);
    return 0;
}