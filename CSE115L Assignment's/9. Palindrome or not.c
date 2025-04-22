#include <stdio.h>
#include <string.h>

int main()
{
    char str1[40];
    int len, flag = 1;
    printf("Enter a string:");
    scanf("%s", str1);
    len = strlen(str1);
    for (int i = 0; i < len / 2; i++)
    {
        if (str1[i] != str1[len - 1 - i])
        {
            flag = 0;
        }
    }
    if (flag)
    {
        printf("the string is palindrome");
        /* code */
    }
    else
        printf("the string is not palindrome");

    return 0;
}
