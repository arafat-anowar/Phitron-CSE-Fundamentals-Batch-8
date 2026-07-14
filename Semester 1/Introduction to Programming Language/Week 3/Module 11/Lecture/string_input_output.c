#include<stdio.h>

int main()
{
    // char s1[1001];
    // scanf("%s",s1);
    // printf("%s\n",s1);

    // char s2[1001];
    // gets(s2);
    // printf("%s\n",s2);

    char s3[1001];
    fgets(s3,1001,stdin);
    printf("%s",s3);
    return 0;
}