#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    long long int sum=0;

    for (int i = 0; i < size; i++)
    {
        sum+=array[i];
    }
    
    printf("%lld",llabs(sum));
    return 0;
}