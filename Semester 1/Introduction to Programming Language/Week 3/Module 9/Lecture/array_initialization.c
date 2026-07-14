#include<stdio.h>

int main()
{
    int array[3]={0,1,2};
    int array_2[3]={0};

    for (int i = 0; i < 3; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",array_2[i]);
    }
    
    
    return 0;
}