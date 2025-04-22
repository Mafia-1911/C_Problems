#include <stdio.h>
void main(){
  int i,answer=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      answer *=i;

  printf("The Factorial of %d is: %d\n",num,answer);
}