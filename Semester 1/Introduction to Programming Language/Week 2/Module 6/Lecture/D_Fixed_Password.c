#include<stdio.h>

int main()
{
    int pass;
    while (scanf("%d",&pass)!=EOF)
    {
        if (pass==1999)
        {
            printf("Correct");
            return 0;
        }
        else{
            printf("Wrong\n");
        }
    }
    
    return 0;
}