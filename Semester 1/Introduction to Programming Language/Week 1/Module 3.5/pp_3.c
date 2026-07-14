#include<stdio.h>

int main()
{
    int a;
    long long int b;
    float c;
    char d;

    scanf("%d",&a);
    printf("%d\n",a);

    scanf("%lld",&b);
    printf("%lld\n",b);

    scanf("%f",&c);  
    printf("%.2f\n",c);

    getchar();
    scanf(" %c",&d);
    printf("%c",d);

    return 0;
}