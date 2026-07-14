#include <stdio.h>
#include<limits.h>

void check(int array[],int n,int i,int max){
    if (i==n)
    {
        printf("%d",max);
        return;
    }
    if (array[i]>max)
    {
        max=array[i];
    }
    check(array,n,i+1,max);
}
int main() {
    int n;
    scanf("%d",&n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int max=INT_MIN;
    check(array,n,0,max);
    return 0;
}