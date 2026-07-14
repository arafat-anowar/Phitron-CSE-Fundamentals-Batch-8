// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char s1[11],s2[11];
//     scanf("%s %s",s1,s2);

//     int s1_length=strlen(s1);
//     int s2_length=strlen(s2);

//     printf("%d %d\n",s1_length,s2_length);
//     printf("%s%s\n",s1,s2);

//     int i=0;
//     char tmp=s1[i];
//     s1[i]=s2[i];
//     s2[i]=tmp;

//     printf("%s %s",s1,s2);
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[11+11],s2[11];
    scanf("%s %s",s1,s2);

    int s1_length=strlen(s1);
    int s2_length=strlen(s2);
    printf("%d %d\n",s1_length,s2_length);

    int new_length=s1_length+s2_length;
    char new_str[new_length];
    strcpy(new_str,s1);
    strcat(new_str,s2);
    printf("%s\n",new_str);

    char tmp=s1[0];
    s1[0]=s2[0];
    s2[0]=tmp;

    printf("%s %s",s1,s2);
    return 0;
}