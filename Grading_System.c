#include<stdio.h>
int main(){
    int sem;
    printf("Enter the semester ");
scanf("%d",&sem);
if(sem==0){
    printf("Invalid Semester");
}else if (sem<=3){
    printf("Freshman");
}else if (sem<=6){
    printf("Sophomore");
}else if (sem<=9){
    printf("Junior");
}else if (sem<=12){
    printf("Senior");
}else printf("You must graduate soon");
    return 0;
}
