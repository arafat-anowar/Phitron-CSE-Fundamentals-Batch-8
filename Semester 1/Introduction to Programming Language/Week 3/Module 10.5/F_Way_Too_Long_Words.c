#include<stdio.h>
#include<string.h>

int main()
{
    int test;
    scanf("%d",&test);
    for (int i = 0; i < test; i++)
    {
        char string[101];
        scanf("%s",string);
        int length=strlen(string);
        if (length>10)
        {
            printf("%c%d%c\n",string[0],length-2,string[length-1]);
        }
        else{
            printf("%s\n",string);
        }
    }
    
    return 0;
}