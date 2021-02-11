//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

float input()
{
float x;
printf("Enter the coordinate:\n");
scanf("%f",&x);
return x;
}

float dist(float x1,float x2,float y1,float y2)
{
float d;
d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
return d;
}

void output(float c)
{
printf("The distance between the points is %f",c);
}

void main()
{
float x1,y1,x2,y2,distance;
printf("First point:\n");
x1=input();
y1=input();
printf("Second point:\n");
x2=input();
y2=input();
distance=dist(x1,x2,y1,y2);
output(distance);
}
