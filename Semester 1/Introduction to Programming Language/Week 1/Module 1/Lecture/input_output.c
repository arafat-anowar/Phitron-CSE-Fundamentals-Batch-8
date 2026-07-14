// Data Type & Format specifier


#include<stdio.h>
#include<stdbool.h>

int main(){

    int a;
    scanf("%d",&a);
    printf("%d\n",a);

    long long int b;
    scanf("%lld",&b);
    printf("%lld\n",b);

    float c;
    scanf("%f",&c);
    printf("%f\n",c);

    double d;
    scanf("%lf",&d);
    printf("%lf\n",d);

    char e;
    getchar();
    scanf("%c",&e);
    printf("%c\n",e);

    bool f;
    scanf("%d",&f);
    printf("%d\n",f);

    char string[100];
    scanf("%s",string);
    printf("%s\n",string);

    return 0;
}