//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>

struct point
{
float x;
float y;
}p;

p input()
{
p dot;
printf("Entered x:");
scanf("%f",dot.x);
printf("Entered y:");
scanf("%f,dot.y);
return dot;
}

float compute(p p1,p p2)
{
float dist;
dist=sqrt(pow((p2.x-p1.y),2)+pow((p2.y-p1.y),2));
return dist;
}

void output(float dist)
{
printf("The distance between the points is %f",dist);
}

void main()
{
p p1,p2;
float d;
printf("First point:\n");
p1=input();
printf("Second point:\n);
p2=input();
d=compute(p1,p2);
output(d);
}