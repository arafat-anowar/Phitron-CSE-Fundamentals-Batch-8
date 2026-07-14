#include<stdio.h>
#include<string.h>

int main()
{
    char string[1000001];
    scanf("%s",string);
    int length=strlen(string);

    int sum=0;

    for (int i = 0; i < length; i++)
    {
        sum+=string[i]-'0';
    }
    printf("%d",sum);
    return 0;
}