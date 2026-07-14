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
    
    int max=INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        
    }
    printf("%d",max);
    return 0;
}