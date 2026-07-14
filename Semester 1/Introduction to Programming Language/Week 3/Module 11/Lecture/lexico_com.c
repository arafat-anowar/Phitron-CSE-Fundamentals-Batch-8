// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s_1[101];
//     char s_2[101];
//     scanf("%s %s", s_1, s_2);

//     int i = 0;
//     while (1)
//     {
//         if (s_1[i] == '\0' && s_2[i] == '\0')
//     {
//         printf("Equal\n");
//         break;
//     }
//     else if (s_1[i] == '\0')
//     {
//         printf("%s choto\n", s_1);
//         break;
//     }
//     else if (s_2 == '\0')
//     {
//         printf("%s choto\n", s_2);
//         break;
//     }

//     if (s_1[i] == s_2[i])
//     {
//         i++;
//     }
//     else if (s_1[i] < s_2[i])
//     {
//         printf("%s choto\n", s_1);
//         break;
//     }
//     else if (s_1[i] > s_2[i])
//     {
//         printf("%s choto\n", s_2);
//         break;
//     }
//     }
    

//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main()
{
    char s_1[101];
    char s_2[101];
    scanf("%s %s", s_1, s_2);

    int val=strcmp(s_1,s_2);

    if (val>0)
    {
        printf("%s Choto",s_2);
    }
    else if (val<0)
    {
        printf("%s Choto",s_1);
    }
    else{
        printf("Equal");
    }
    return 0;
}