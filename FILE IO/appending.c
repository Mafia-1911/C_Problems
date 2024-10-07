#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE* fp;
    fp=fopen("myi.txt","a");
    fprintf(fp,"addthis");
    fclose(fp);

    while(1){
        fgets(storage,10,fp);
        
    }
    return 0;
}
