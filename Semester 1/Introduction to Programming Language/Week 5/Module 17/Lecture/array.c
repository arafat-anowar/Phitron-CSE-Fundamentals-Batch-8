#include<stdio.h>

void print(int array[],int i,int n){
    if (i==n)
    {
        return;
    }
    
    printf("%d ",array[i]);
    print(array,i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    print(array,0,n);
    return 0;
}