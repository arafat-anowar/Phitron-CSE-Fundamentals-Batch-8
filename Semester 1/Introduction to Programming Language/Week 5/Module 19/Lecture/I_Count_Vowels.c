#include <stdio.h>
#include <string.h>

void check(int count, int i, int length, char s[])
{
    if (i == length)
    {
        printf("%d", count);
        return;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        count++;
    }
    check(count, i + 1, length, s);
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int length = strlen(s);

    check(0, 0, length, s);
    return 0;
}