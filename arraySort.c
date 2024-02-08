#include<stdio.h>

int main()
{
    int new[10]={9,7,5,8,2,3,1,4,6,7};
    // for(int i=0;i<=10-1;i++){
    //     for(int j=0;j<10-1-i;j++){
    //         if(new[j]>new[j+1]){
    //             int temp=new[j];
    //             new[j]=new[j+1];
    //             new[j+1]=temp;
    //         }
    //     }
    // }
    // for descending 3,9
    for(int i=0;i<10-1;i++){
        for(int j=0;j<10-1-i;j++){
            if(new[j]<new[j+1]){
                int temp = new[j];
                new[j]=new[j+1];
                new[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",new[i]);
    }
    /* code */
    return 0;
}
