//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>

struct point
{
float x;
float y;
};

void input(struct point *p)
{
printf("Enter coordinates:\n");
scanf("%f%f", &(*p).x, &(*p).y);
}

float distance(struct point p1,struct point p2)
{
float dist;
dist = sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
return dist;
}

void output(float dist)
{
printf("Distance between the points = %f",dist);
}

void main()
{
struct point p1,p2;
float d;
printf("1st point:\n");
input(&p1);
printf("2nd point:\n");
input(&p2);
d=distance(p1,p2);
output(d);
}