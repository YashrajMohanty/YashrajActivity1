#include<stdio.h>

struct fraction
{
int x;
int y;
};

void input(struct fraction *p)
{
printf("Enter the numerator:");
scanf("%d",&(*p).x);
printf("Enter the denominator:");
scanf("%d",&(*p).y); 
}

int add(struct fraction n1,struct fraction n2)
{
int num,den;
num=((n1.x)*(n2.y))+((n2.x)*(n1.y));
den=(n1.y)*(n2.y);
return num,den;
}

void output(int num,int den)
{
printf("The sum of the fractions is %d/%d",num,den);
}

void main()
{
struct fraction n1,n2;
int num,den;
printf("First fraction:\n");
input(&n1);
printf("Second fraction:\n");
input(&n2);
add(n1,n2);
output(num,den);
}