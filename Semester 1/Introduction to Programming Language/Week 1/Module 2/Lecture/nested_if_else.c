#include<stdio.h>

int main()
{
    int tk;
    scanf("%d",&tk);

    if (tk>10000)
    {
        if (tk-5000>8000)
        {
            printf("USA");
        }
        else{
            printf("Poland");
        }
    }
    else{
        printf("Kothao Jabo na");
    }
    return 0;
}