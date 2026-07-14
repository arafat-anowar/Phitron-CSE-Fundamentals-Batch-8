#include<stdio.h>

int main()
{
    char string[101]="My Name is Arafat";

    string[7]='\0';

    printf("%s",string);
    return 0;
}