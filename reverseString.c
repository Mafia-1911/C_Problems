#include <stdio.h>
#include <string.h>

int main()
{
    char input[100]="abcdef";
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
