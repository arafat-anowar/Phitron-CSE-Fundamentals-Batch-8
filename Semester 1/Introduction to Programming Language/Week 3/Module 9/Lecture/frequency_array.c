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
    
    int fre[10]={0};

    for (int i = 0; i < size; i++)
    {
        int val=array[i];
        fre[val]++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",fre[i]);
    }
    
    return 0;
}