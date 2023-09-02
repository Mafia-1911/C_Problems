#include<stdio.h>
int main()
{
    //check if number is prime on range a,b
        //if number gets divisible by any other number its not prime
        //a^2 - 1 divide by 24 will give no reminderx
    //true-print false-move on 
    allPrime(10,20);
    return 0;
}
int allPrime(int a,int b){
    for(int i=a;i<=b;i++){//1 2 3 4 
        if(isPrime(i)){
            printf("%d",i);
        }
    }
}
int isPrime(n){
    for(int i=2;i<=n/2;i++){
        n%i != 0;//number was not divisible 
    }
    return 1;
}


