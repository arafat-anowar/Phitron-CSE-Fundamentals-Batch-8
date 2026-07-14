#include<stdio.h>
#include<string.h>

int main()
{
    char string[1000001];
    fgets(string,1000001,stdin);
    int length=strlen(string);

    int i=0;
    while (string[i]!='\\')
    {
        printf("%c",string[i]);
        i++;
    }
    

    return 0;
}