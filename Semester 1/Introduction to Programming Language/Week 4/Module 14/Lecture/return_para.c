#include<stdio.h>

int check_num(int a){
    if (a%2==0)
    {
        return 1;
    }
    else if (a%2!=0)
    {
        return 0;
    }
    
}


int main()
{
    int a;
    scanf("%d",&a);
    if (check_num(a)==0)
    {
        printf("NO");
    }
    else if (check_num(a)==1)
    {
        printf("YES");
    }
    
    return 0;
}