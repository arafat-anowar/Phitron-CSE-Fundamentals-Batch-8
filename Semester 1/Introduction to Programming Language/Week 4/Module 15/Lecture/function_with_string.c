#include<stdio.h>

void fun(char string[10]){
    *string="Hi";
}
int main()
{
    char s[10];
    scanf("%s",s);
    fun(s);
    printf("%s",s);
    return 0;
}