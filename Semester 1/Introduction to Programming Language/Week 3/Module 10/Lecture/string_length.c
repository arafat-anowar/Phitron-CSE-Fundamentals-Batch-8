// #include<stdio.h>

// int main()
// {
//     char string[101];
//     fgets(string,101,stdin);

//     int i=0;
//     int count=0;
//     while (string[i]!='\0')
//     {
//         count++;
//         i++;
//     }
//     printf("%d",count);
    
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main()
{
    char string[101];
    fgets(string,101,stdin);

    int length=strlen(string);

    printf("%d",length);
    return 0;
}