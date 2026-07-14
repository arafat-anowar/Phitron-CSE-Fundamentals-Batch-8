#include <stdio.h>
#include <string.h>

int is_palindrome(char string[])
{
    int length = strlen(string);
    int non_palindrome = 0;
    int palindrome = 1;
    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        if (string[i] != string[j])
        {

            return non_palindrome;
        }

        i++;
        j--;
    }

    return palindrome;
}
int main()
{
    char string[1001];
    scanf("%s", string);

    int val = is_palindrome(string);
    if (val == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}