#include<stdio.h>
#include<string.h>

int main()
{
    char string[10000001];
    scanf("%s",string);
    int length=strlen(string);

    int fre[26]={0};

    for (int i = 0; i < length; i++)
    {
        int val=string[i]-'a';
        fre[val]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (fre[i]!=0)
        {
            printf("%c : %d\n",i+'a',fre[i]);
        }
        
    }
    

    return 0;
}