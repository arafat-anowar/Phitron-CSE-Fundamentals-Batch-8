#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    for (int i = 1; i <=n; i+=2)
    {
        count++;
    }
    
    int height=5+count;
    int spac=height-1;
    int star=1;
    for (int i = 1; i <=height; i++)
    {
        for (int j = 1; j <= spac; j++)
        {
            printf(" ");
        }
        spac--;
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star+=2;
        printf("\n");
        
        
    }
    
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}