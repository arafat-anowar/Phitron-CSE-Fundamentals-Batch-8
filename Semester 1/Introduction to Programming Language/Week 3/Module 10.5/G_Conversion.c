#include<stdio.h>
#include<string.h>

int main()
{
    char string[100001];
    fgets(string,100001,stdin);
    int length=strlen(string);

    for (int i = 0; i < length; i++)
    {
        if (string[i]>='A' && string[i]<='Z')
        {
            string[i]=string[i]+32;
        }
        else if (string[i]>='a' && string[i]<='z')
        {
            string[i]=string[i]-32;
        }
        else if (string[i]==',')
        {
            string[i]=' ';
        }
        
    }
    printf("%s",string);
    return 0;
}