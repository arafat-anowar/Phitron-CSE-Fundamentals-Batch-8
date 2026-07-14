#include<stdio.h>
#include<string.h>

int main()
{
    char string[1001];
    scanf("%s",string);
    int length=strlen(string);

    int i=0;
    int j=length-1;
    while (i<j)
    {
        char tmp=string[i];
        string[i]=string[j];
        string[j]=tmp;
        if (string[i]!=string[j])
        {
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES");
    return 0;
}