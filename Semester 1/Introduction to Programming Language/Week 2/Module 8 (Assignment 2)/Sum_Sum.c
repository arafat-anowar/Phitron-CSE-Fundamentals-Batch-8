#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    int pos_sum=0;
    int neg_sum=0;

    for (int i = 0; i < n; i++)
    {
        if (array[i]>0)
        {
            pos_sum+=array[i];
        }
        else if (array[i]<0)
        {
            neg_sum+=array[i];
        }
        
    }
    
    printf("%d %d",pos_sum,neg_sum);
    return 0;
}