#include<stdio.h>
#include<stdlib.h>
int main()
{
 int x,r,s;
 float l,b,t,h;
while(1)
{
 printf(" \n\nMAIN MENU ");
 printf("\n\n1. area of circle");
 printf("\n2. area of rectangle");
 printf("\n3. area of triangle");
 printf("\n4. area of square");
 printf("\n5. exit\n");
 printf("\nchoose & enter a number for area\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1:
    printf("enter radius to calculate area : ");
    scanf("%d",&r);
    printf("area of circle = %.2f",3.14*r*r);
    break;
 
 case 2:
 
   printf("enter length & bredth to calculate area\n");
   scanf("%f%f",&l,&b);
   printf("area of rectangle = %.2f",l*b);
   break;
   
 case 3:
   
    printf("enter breadth & height to calculate area\n");
    scanf("%f%f",&t,&h);
    printf("area of triangle = %.2f",0.5*t*h);
    break;
   
 case 4:
   
   printf("enter side to calculate area\n");
   scanf("%d",&s);
   printf("area of square = %d",s*s);
   break;
   

 case 5:
   
   exit(0);
   
 default:
 printf("error! choose above operation no.");
 }
}
 }
 
