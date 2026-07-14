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
        if (array[i]<=10)
        {
            printf("A[%d] = %d\n",i,array[i]);
        }
        
    }
    
    return 0;
}