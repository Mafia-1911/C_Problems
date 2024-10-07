#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    fp=fopen("C:\1. NUSHAN\C Problems\FILE IO\demo.txt","r");
    if (fp==NULL){
        exit(1);
    }
    char str[40];
    fscanf(fp,"%s",&str);
    puts(str);

    
    return 0;
}
