#include<stdio.h>

int check_num(){
    int num;
    scanf("%d",&num);
    if (num%2==0)
    {
        return 1;
    }
    else if (num%2!=0)
    {
        return 0;
    }
    
}

int main()
{
    if (check_num()!=0)
    {
        printf("YES");
    }
    else if (check_num()==0)
    {
        printf("NO");
    }
    
    return 0;
}