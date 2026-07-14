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
    
    int i=0;
    int j=n-1;
    while (i<j)
    {
        int tmp=array[i];
        array[i]=array[j];
        array[j]=tmp;

        if (array[i]!=array[j])
        {
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES");
    return 0;
}