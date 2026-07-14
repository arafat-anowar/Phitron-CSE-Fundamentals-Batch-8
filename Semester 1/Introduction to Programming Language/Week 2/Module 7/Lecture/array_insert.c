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
    
    int pos,val;
    scanf("%d %d",&pos,&val);

    for (int i = size; i >pos; i--)
    {
        array[i]=array[i-1];
    }
    
    array[pos]=val;
    for (int i = 0; i <=size; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}