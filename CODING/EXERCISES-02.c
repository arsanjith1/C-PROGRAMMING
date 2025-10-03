#include<stdio.h>

#define PI 3.14

void main()

{

float r,l,b,cir_area,rect_area;

clrscr();

printf("Enter the value of radius r\n");

scanf("%f",&r);

cir_area=PI*r*r;

printf("Area of a circle is %6.2f",cir_area);

printf("\nEnter the value of length\n");

scanf("%f",&l);

printf("Enter the value of breadth\n");

scanf("%f",&b);

rect_area=1*b;

printf("Area of rectangle is %6.2f",rect_area);

getch();

}
