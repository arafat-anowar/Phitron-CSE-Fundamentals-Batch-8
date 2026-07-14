// #include <stdio.h>

// void print_n_1(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     printf("%d\n", n);
//     print_n_1(n - 1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     print_n_1(n);
//     return 0;
// }

#include <stdio.h>

void print_n_1(int i,int n)
{
    if (i > n)
    {
        return;
    }
    
    print_n_1(i+1,n);
    printf("%d\n", i);
}
int main()
{
    int n;
    scanf("%d", &n);

    print_n_1(1,n);
    return 0;
}