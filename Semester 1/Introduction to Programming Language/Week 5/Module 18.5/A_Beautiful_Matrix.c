#include <stdio.h>

int main()
{
    int r = 6;
    int c = 6;

    int array[r][c];

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int idx_i = 0;
    int idx_j = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (array[i][j] == 1)
            {
                idx_i = i;
                idx_j = j;
            }
        }
    }
    int i = idx_i;
    int j = idx_j;

    int i_move = 0;
    int j_move = 0;

    if (idx_i <= 3 && idx_j >= 3)
    {
        while (i != 3)
        {
            int tmp = array[i][j];
            array[i][j] = array[i + 1][j];
            array[i + 1][j] = tmp;
            i_move++;

            i++;
        }
        while (j != 3)
        {
            int tmp = array[i][j];
            array[i][j] = array[i][j - 1];
            array[i][j - 1] = tmp;
            j_move++;

            j--;
        }
    }

    else if (idx_i <= 3 && idx_j <= 3)
    {
        while (i != 3)
        {
            int tmp = array[i][j];
            array[i][j] = array[i + 1][j];
            array[i + 1][j] = tmp;
            i_move++;

            i++;
        }
        while (j != 3)
        {
            int tmp = array[i][j];
            array[i][j] = array[i][j + 1];
            array[i][j + 1] = tmp;
            j_move++;

            j++;
        }
    }

    else if (idx_i >= 3 && idx_j >= 3)
    {
        while (i != 3)
        {
            int tmp = array[i][j];
            array[i][j] = array[i - 1][j];
            array[i - 1][j] = tmp;
            i_move++;

            i--;
        }
        while (j != 3)
        {
            int tmp = array[i][j];
            array[i][j] = array[i][j - 1];
            array[i][j - 1] = tmp;
            j_move++;

            j--;
        }
    }

    else if (idx_i >= 3 && idx_j <= 3)
    {
        while (i != 3)
        {
            int tmp = array[i][j];
            array[i][j] = array[i - 1][j];
            array[i - 1][j] = tmp;
            i_move++;

            i--;
        }
        while (j != 3)
        {
            int tmp = array[i][j];
            array[i][j] = array[i][j + 1];
            array[i][j + 1] = tmp;
            j_move++;

            j++;
        }
    }

    int move = i_move + j_move;
    printf("%d", move);
    return 0;
}