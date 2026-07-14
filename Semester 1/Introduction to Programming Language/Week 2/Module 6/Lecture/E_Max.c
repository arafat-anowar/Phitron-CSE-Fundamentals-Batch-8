#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);

    int max=INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d",&num);
        if (num>max)
        {
            max=num;
        }
        
    }
    printf("%d",max);
    return 0;
}