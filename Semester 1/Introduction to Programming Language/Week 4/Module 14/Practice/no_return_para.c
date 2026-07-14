#include<stdio.h>

void check_num(int num){
    if (num%2==0)
    {
        printf("YES");
    }
    else if (num%2!=0)
    {
        printf("NO");
    }
    
}

int main()
{
    int num;
    scanf("%d",&num);
    check_num(num);
    
    return 0;
}