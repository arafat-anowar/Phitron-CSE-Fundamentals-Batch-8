#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        int j=0;
        int k=m-1;
        
        while (j<k)
        {
            int tmp=array[i][j];
            array[i][j]=array[i][k];
            array[i][k]=tmp;

            j++;
            k--;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}