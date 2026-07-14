#include<stdio.h>
#include<limits.h>

int main()
{
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    int min=INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }
        
    }
    printf("%d",min);
    return 0;
}