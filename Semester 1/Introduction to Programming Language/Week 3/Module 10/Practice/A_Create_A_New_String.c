#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    char b[1001];
    scanf("%s %s",a,b);

    int a_length=strlen(a);
    int b_length=strlen(b);

    printf("%d %d\n",a_length,b_length);
    printf("%s %s",a,b);
    return 0;
}