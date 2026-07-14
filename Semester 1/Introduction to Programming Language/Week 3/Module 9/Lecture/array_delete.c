#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d ",&array[i]);
    }
    
    
    int pos;
    scanf("%d",&pos);

    for (int i = pos; i < size-1; i++)
    {
        array[i]=array[i+1];
    }
    
    for (int i = 0; i < size-1; i++)
    {
        printf("%d ",array[i]);
    }


    return 0;
}