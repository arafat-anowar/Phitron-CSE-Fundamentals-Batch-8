#include<stdio.h>
#include<stdlib.h>

int my_abs(int num){
    int val=abs(num);
    return val;
}
int main()
{
    int num;
    scanf("%d",&num);

    int val=my_abs(num);
    printf("%d",val);
    return 0;
}