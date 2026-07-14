#include<stdio.h>

void check_num(){
    int num;
    scanf("%d",&num);
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
    check_num();
    return 0;
}