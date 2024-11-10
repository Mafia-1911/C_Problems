//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
#include<stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    int arr[1000+5];
    for(int i=0;i<1000+5;i++){
        arr[i]=15;
    }

    for(int i=0;i<input;i++){
        int temp;
        scanf("%d",&temp);
        arr[i]=temp;
    };
 for(int i=0;i<1000+5;i++){
        if(arr[i]<=10){
            //Wasn't checking for equal to 10 
            printf("A[%d] = %d\n",i,arr[i]);
        }
    };
