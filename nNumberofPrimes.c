#include <stdio.h>

int main()
{
    //initialize array 
    int userArray[40]={25,14,78,5,90,31,32,85};
    int n,i,j,counter=1;
    //take array as input 
    // printf("Enter the length of arr");
    // scanf("%d",&n);
    // int user[n];
    // for(i=0;i<=n;i++){
    //     scanf("%d",&user[i]);
    // }
    
    //iterate over every element arra[i]
    for(i=0;i<=40;i++){
        //iterating to see if its divisible 
        for(j=2;j<(userArray[i]/2);j++){//25/2 1
            if(userArray[i]%j==0) counter=0;break;
        }
        if(counter) printf("%d",userArray[i]);
    }
    return 0;
}
