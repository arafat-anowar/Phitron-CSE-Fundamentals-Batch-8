#include<stdio.h>
#include<limits.h>

int main()
{
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i = 1; i <= size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    int min=INT_MAX;
    int pos=0;

    for (int i = 1; i <= size; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
            pos=i;
        }
        
    }
    
    printf("%d %d",min,pos);
    return 0;
}