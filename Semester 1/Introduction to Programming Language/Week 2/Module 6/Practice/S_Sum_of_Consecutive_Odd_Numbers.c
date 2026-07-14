#include<stdio.h>

int main()
{
    int test;
    scanf("%d",&test);

    for (int i = 1; i <=test; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        if (x<=y)
        {
            int sum=0;
            for (int j = x+1; j <y; j++)
            {
                if (j%2==1)
                {
                    sum+=j;
                }
                
            }
            printf("%d\n",sum);
        }
        else if (x>y)
        {
            int sum=0;
            for (int j = y+1; j <x; j++)
            {
                if (j%2==1)
                {
                    sum+=j;
                }
                
            }
            printf("%d\n",sum);
        }
        
    }
    
    return 0;
}