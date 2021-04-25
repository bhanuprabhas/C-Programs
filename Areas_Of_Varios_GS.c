/*Write a program in C which is a Menu-Driven Program to compute the area of the various 
geometrical shape.*/
#include <stdio.h>
void main ()
{
 int choice,r,l,w,b,h;
 float area;
 while(1)
{
 printf("Input 1 for area of circle\n");
 printf("Input 2 for area of rectangle\n");
 printf("Input 3 for area of triangle\n");
 printf("Input 0 for exit\n");
 printf("Input your choice : ");
 scanf("%d",&choice);
 if(choice==0)
  {
   break;
  }
   switch(choice)
    {
 case 1:
 printf("Input radius of the circle : ");
 scanf("%d",&r);
 area=3.14*r*r;
 break;
 case 2:
 printf("Input length and width of the rectangle : ");
 scanf("%d%d",&l,&w);
 area=l*w;
 break;
 case 3:
 printf("Input the base and height of the triangle :");
 scanf("%d%d",&b,&h);
 area=(b*h)/2;
 break;
    }
   printf("The area is : %f\n",area);
  }
}
