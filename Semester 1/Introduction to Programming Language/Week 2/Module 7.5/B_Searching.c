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
    
    int val;
    scanf("%d",&val);

    int pos=-1;
    for (int i = 0; i < size; i++)
    {
        if (array[i]==val)
        {
            pos=i;
            break;
        }
        
    }
    
    if (pos<0)
    {
        printf("-1");
    }
    else{
        printf("%d",pos);
    }
    return 0;
}