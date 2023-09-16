#include <stdio.h>
#include <string.h>

char bubbleSort(char a[]);
int main()
{
    //take a string 
    char string[100];
    printf("enter the string: ");
    gets(string);
    puts(string);
    bubbleSort(string);
    // puts(str2);
    /* code */
    return 0;
}
char bubbleSort(char a[]){
    char temp;int i,j;
    //int len=sizeof(a)/sizeof(a[0]);
    int len=strlen(a);
    for(i=0;i<len-1;i++){
        for(j=0;j<len-1-i;j++){
            
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];//1st element equals to second 
                a[j+1]=temp;
            }
        }
    }
puts(a);
return a;
}




