#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        if (array[i]>0)
        {
            array[i]=1;
        }
        else if (array[i]<0)
        {
            array[i]=2;
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}