#include<stdio.h>
void swap(int* a , int* b){
    int temp=*a;//storing value at a in temp
    *a = *b;    //Value at a = Value at b
    *b=temp;    // Value at b = temp 
}
int main(){
    int x=10,y=15;
    printf("Before swap: X=%d Y=%d\n",x,y);
    swap(&x,&y);
    printf("After swap: X=%d Y=%d",x,y);
    return 0;
}
