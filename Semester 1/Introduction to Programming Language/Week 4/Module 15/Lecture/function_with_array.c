#include<stdio.h>

void fun(int arr[],int n){
    arr[2]=1000;
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
    fun(array,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}