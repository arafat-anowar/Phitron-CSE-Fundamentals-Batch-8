#include<stdio.h>

void input_array(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);

    int array[n];

    input_array(array,n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}