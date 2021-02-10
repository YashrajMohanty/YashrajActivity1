//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>

float input() 
{
float x;
scanf ("%f", &x);
return x;
}

float volume(float a, float b, float c) 
{
float vol;
vol = ((a * b * c) + (b / c)) / 3;
return vol;
}

void output(float out) 
{
printf ("The volume is %f", out);
} 
 
void main() 
{
float h, b, d, volof;
printf("Enter h:\n");
h = input();
printf("Enter d:\n");
d = input();
printf("Enter b:\n");
b = input();
volof = volume(h, d, b);
output(volof);
}
