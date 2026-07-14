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
    
    int i=0;
    int j=size-1;
    while (i<j)
    {
        int tmp=array[i];
        array[i]=array[j];
        array[j]=tmp;
        i++;
        j--;
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    return 0;
}