//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>

void main()
{
float h,d,b,vol;
printf("Enter the values of h, d and b respectively:\n");
scanf("%f%f%f",&h,&b,&d);
vol=((h*d*b)+(d/b))/3;
printf("Volume of the trombloid=%f",vol);
}
