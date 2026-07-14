#include <stdio.h>

void print(int i,int n){
    if (i>n)
    {
        return;
    }
    print(i+1,n);
    if (i!=n)
    {
        printf(" ");
    }
    printf("%d",i);
    
}
int main() {
    int n;
    scanf("%d",&n);

    print(1,n);
    return 0;
}