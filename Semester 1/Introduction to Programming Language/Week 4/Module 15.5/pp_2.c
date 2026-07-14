#include<stdio.h>

int my_len(char s[]){
    int count=0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char s[1001];
    scanf("%s",s);

    int length=my_len(s);
    printf("%d",length);
    return 0;
}