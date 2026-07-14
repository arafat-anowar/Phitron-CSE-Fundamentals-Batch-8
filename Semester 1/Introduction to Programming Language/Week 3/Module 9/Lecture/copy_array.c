#include<stdio.h>

int main()
{
    int array_1_size;
    scanf("%d",&array_1_size);

    int array_1[array_1_size];
    for (int i = 0; i < array_1_size; i++)
    {
        scanf("%d",&array_1[i]);
    }
    
    int array_2_size;
    scanf("%d",&array_2_size);

    int array_2[array_2_size];
    for (int i = 0; i < array_2_size; i++)
    {
        scanf("%d",&array_2[i]);
    }
    
    
    int array[array_1_size+array_2_size];

    for (int i = 0; i < array_1_size; i++)
    {
        array[i]=array_1[i];
    }

    int j=array_1_size;
    for (int i = 0; i < array_2_size; i++)
    {
        array[j]=array_2[i];
        j++;
    }
    
    for (int i = 0; i < array_1_size+array_2_size; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}