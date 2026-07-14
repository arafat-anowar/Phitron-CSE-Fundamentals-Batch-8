#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);

    for (int i = 1; i < w; i++)
    {
        for (int j = i; j <= w; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                if (i + j == w)
                {
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");
    return 0;
}