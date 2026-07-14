#include<stdio.h>

int main()
{
    int test;
    scanf("%d",&test);

    for (int i = 1; i <= test; i++)
    {
        int num;
        scanf("%d",&num);

        long long int fac=1;

        for (int j = 1; j <=num; j++)
        {
            fac*=j;
        }
        printf("%lld\n",fac);
    }
    
    return 0;
}