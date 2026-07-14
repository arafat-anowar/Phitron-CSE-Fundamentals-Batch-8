#include<stdio.h>
#include<limits.h>

int main()
{
    int test;
    scanf("%d",&test);

    for (int i = 1; i <=test; i++)
    {
        int n;
        scanf("%d",&n);
        
        int arr[n];
        for (int j = 1; j <= n; j++)
        {
            scanf("%d",&arr[j]);
        }
       
        long long int small_pair=INT_MAX;

        for (int k = 1; k < n; k++)
        {
            for (int l = k+1; l <=n; l++)
            {
                long long int val=arr[k]+arr[l]+l-k;
                if (val<small_pair)
                {
                    small_pair=val;
                }
                
            }
            
        }
        
        printf("%lld\n",small_pair);
    }
    
    return 0;
}