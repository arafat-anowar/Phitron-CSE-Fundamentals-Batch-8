#include<stdio.h>
#include<string.h>

int main()
{
    int test;
    scanf("%d",&test);

    for (int i = 1; i <= test; i++)
    {
        char s[51];
        char t[51];
        scanf("%s %s",s,t);
        int s_length=strlen(s);
        int t_length=strlen(t);

        if (s_length==t_length)
        {
            for (int i = 0; i < s_length; i++)
            {
                printf("%c%c",s[i],t[i]);
            }
            printf("\n");
        }
        else if (s_length<t_length)
        {
            for (size_t i = 0; i < s_length; i++)
            {
                 printf("%c%c",s[i],t[i]);
            }
            for (int i = s_length; i < t_length; i++)
            {
                printf("%c",t[i]);
            }
            printf("\n");
        }
        else if (s_length>t_length)
        {
            for (size_t i = 0; i < t_length; i++)
            {
                 printf("%c%c",s[i],t[i]);
            }
            for (int i = t_length; i < s_length; i++)
            {
                printf("%c",s[i]);
            }
            printf("\n");
        }
    }
    
    return 0;
}