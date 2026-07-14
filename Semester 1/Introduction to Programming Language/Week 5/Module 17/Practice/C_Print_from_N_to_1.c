#include<stdio.h>

void print_n_1(int i,int n){
    if (i>n)
    {
        return;
    }
    print_n_1(i+1,n);
    printf("%d",i);
    if (i>1)
    {
        printf(" ");
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);

    print_n_1(1,n);
    return 0;
}