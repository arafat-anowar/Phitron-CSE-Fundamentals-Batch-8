// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char a[101];
//     scanf("%s",a);

//     char b[101];
//     scanf("%s",b);
//     int b_length=strlen(b);

//     for (int i = 0; i <=b_length; i++)
//     {
//         a[i]=b[i];
//     }
    
//     printf("%s",a);
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main()
{
    char a[101];
    scanf("%s",a);

    char b[101];
    scanf("%s",b);

    strcpy(a,b);

    printf("%s",a);
    return 0;
}