#include <stdio.h>
#include <string.h>

int main()
{
    char input[100]="abcdejuuuif";
    int len=strlen(input);
    for(int i=0,j=len-1;i<j;i++,j--){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
    }
    puts(input);
    printf("A is %d in ascii",'A');
    /* code */
    return 0;
}

int main2()
{
    char string1[100] = {'h','i'};
    puts(string1);
    for(int i=0,j=strlen(string1)-1;    j>i;    i++,j--){
        char temp;
        temp=string1[i];
        string1[i]=string1[j];
        string1[j]=temp;
    }
    puts(string1);

    return 0;
}
