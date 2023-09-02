//Write a C program that reads the first letter of direction (North, South, East, West), current
// (x,y) coordinate, and advancement of a person and prints the new coordinate. For e.g., if the
// current coordinate of a person in X- Y plane is (2,3) and s/he advances 6 units towards North,
// then his/her new coordinate is (2,3+6)=(2,9). Sample input/output (bold ones are user inputs):
// Enter current coordinate (x and y positions): 2 3
// Enter No. units towards direction: 6
// Enter Direction: N
// New coordinate: (2,9)
#include<stdio.h>
int main(){
   float x=0, y=0;
   char dir;
   float mile;
   while (1)
   {
       printf("Please input the direction as N,S,E,W (0 to exit): ");
       scanf("%c", &dir);
       fflush(stdin);
       if (dir=='0')   /*stop input, get out of the loop */
       {
           break;
       }
       if (dir!='N' && dir!='S' && dir!='E' && dir!='W')
       {
           printf("Invalid direction, re-enter \n");
           continue;
       }
       printf("Please input the mile in %c direction: ", dir);
       scanf ("%f",&mile);
       fflush(stdin);
       if (dir == 'N') 		/*in north, compute the y*/
       {
           y+=mile;
       }
       else if (dir == 'E') 	/*in east, compute the x*/
       {
           x+=mile;
       }
       else if (dir == 'W') 	/*in west, compute the x*/
       {
           x-=mile;
       }
       else if (dir == 'S') 	/*in south, compute the y*/
       {
           y-=mile;
       }
   }
   printf("\nCurrent position of A: (%4.2f,%4.2f)\n",x,y); 
    return 0;
}