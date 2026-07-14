#include<stdio.h>

int main()
{
    int test;
    scanf("%d",&test);
    for (int i = 1; i <=test; i++)
    {
        int m_1;
        scanf("%d",&m_1);
        int m_2;
        scanf("%d",&m_2);
        int d;
        scanf("%d",&d);

        printf("%d\n",d-((m_1*d)/(m_1+m_2)));
    }
    
    return 0;
}