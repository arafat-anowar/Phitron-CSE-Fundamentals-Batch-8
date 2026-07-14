#include <stdio.h>

void sum(int array[],int n,int i,long long int summation){
    if (i==n)
    {
        printf("%lld",summation);
        return;
    }
    summation+=array[i];
    sum(array,n,i+1,summation);
}
int main() {
    int n;
    scanf("%d",&n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    sum(array,n,0,0);
    return 0;
}