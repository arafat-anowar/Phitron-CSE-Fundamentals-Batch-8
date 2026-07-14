#include<stdio.h>

void print_1_n(int i,int n){
    if (i>n)
    {
        return;
    }
    printf("%d\n",i);
    print_1_n(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);

    print_1_n(1,n);
    return 0;
}