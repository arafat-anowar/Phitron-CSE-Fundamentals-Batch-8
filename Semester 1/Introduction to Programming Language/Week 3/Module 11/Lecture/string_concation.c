// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char a[101];
//     scanf("%s",a);
//     int a_length=strlen(a);
    
//     char b[101];
//     scanf("%s",b);  
//     int b_length=strlen(b);
    
//     char new_string[a_length+b_length];

//     for (int i = 0; i <=a_length; i++)
//     {
//         new_string[i]=a[i];
//     }
    
//     int j=a_length;
//     for (int  i = 0; i <=b_length; i++)
//     {
//         new_string[j]=b[i];
//         j++;
//     }
    
//     printf("%s",new_string);

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
    
    strcat(a,b);
    printf("%s",a);
    return 0;
}