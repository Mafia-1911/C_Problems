#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str1[10];
    char str2[5];
    gets(str1);
    gets(str2);
    int last = strlen(str1); // 5
    // printf("%c",str1[last]);
    for (i = last, j = 0; i < 10 && j < 5; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    puts(str1);

    return 0;
}
