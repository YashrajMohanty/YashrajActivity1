//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>

int input()
{
printf("Enter number:\n");
int a;
scanf("%d",&a);
return a;
}

int sum(int a,int b)
{
int add;
add=a+b;
return add;
}

void output(int c)
{
printf("The sum is %d",c);
}

void main()
{
int x,y,z;
x=input();
y=input();
z=sum(x,y);
output(z);
}
