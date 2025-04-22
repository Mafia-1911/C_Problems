#include<stdio.h>

int main()
{
    int arr1[50]={1,2,3,4,5};
    int large=arr1[0];
    for(int i=1;i<50;i++){
        if (arr1[i]>large)
        {
            large=arr1[i];
        }
        
    }
    printf("%d",large);
    /* code */
    return 0;
}

