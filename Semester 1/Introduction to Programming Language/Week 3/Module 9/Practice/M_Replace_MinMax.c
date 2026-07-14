#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    int min=INT_MAX;
    int min_idx=-1;

    int max=INT_MIN;
    int max_idx=-1;

    for (int i = 0; i < n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
            min_idx=i;
        }
        if (array[i]>max)
        {
            max=array[i];
            max_idx=i;
        }
        
    }
    
    array[min_idx]=max;
    array[max_idx]=min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    

    return 0;
}