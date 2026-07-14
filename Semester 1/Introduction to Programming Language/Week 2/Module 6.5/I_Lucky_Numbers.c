#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    int f_d=num/10;
    int l_d=num%10;

    if (l_d%f_d==0 ||f_d%l_d==0 )
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}