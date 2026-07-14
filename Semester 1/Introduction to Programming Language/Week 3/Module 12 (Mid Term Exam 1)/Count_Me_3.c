#include<stdio.h>
#include<string.h>

int main()
{
    int test;
    scanf("%d",&test);
    for (int i = 1; i <=test; i++)
    {
        char s[10001];
        scanf("%s",&s);

        int length=strlen(s);

        int capital=0;
        int small=0;
        int digit=0;

        for (int i = 0; i < length; i++)
        {
            if (s[i]>='A' && s[i]<='Z')
            {
                capital++;
            }
            else if (s[i]>='a' && s[i]<='z')
            {
                small++;
            }
            else if (s[i]>='0' && s[i]<='9')
            {
                digit++;
            }
            
        }
        printf("%d %d %d\n",capital,small,digit);
    }
    
    return 0;
}