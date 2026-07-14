#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    scanf("%s",str);
    int length=strlen(str);

    int i=0;
    int j=length-1;
    while (i<j)
    {
        char tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;

        if (str[i]!=str[j])
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