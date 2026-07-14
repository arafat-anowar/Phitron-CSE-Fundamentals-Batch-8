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
    
    int odd=0;
    for (int i = 0; i < size; i++)
    {
        if (array[i]%2!=0)
        {
            odd++;
        }
        
    }
    
    printf("%d",odd);
    return 0;
}