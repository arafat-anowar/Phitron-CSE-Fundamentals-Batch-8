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
    
    int x;
    scanf("%d",&x);
    int flag=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <=n ; j++)
        {
            int val=array[i]+array[j];
            if (val==x)
            {
                printf("YES");
                flag=1;
            }
            
        }
        
    }
    if (flag==0)
    {
        printf("NO");
    }
    
    return 0;
}