#include<stdio.h>

struct Fract
{
   int n,d;
};

struct Fract add(struct Fract, struct Fract);
int gcd_calc(int,int);
void output(struct Fract, struct Fract, struct Fract);

int main()
{
   struct Fract a, b,c;
   int sum,lcm;
   printf("Enter 1st numerator and denominator:\n");
   scanf("%d %d", &a.n, &a.d);
   printf("Enter 2nd numerator and denominator:\n");
   scanf("%d %d", &b.n, &b.d);
   c=add(a,b);
   output(a,b,c);
   return 0;
}

struct Fract add(struct Fract a, struct Fract b)
{
   struct Fract c;
   int gcd;
   c.n=((a.n*b.d)+(b.n*a.d));
   c.d=a.d*b.d;
   gcd=gcd_calc(c.n,c.d);
   c.n=c.n/gcd;
   c.d=c.d/gcd;
   return c;
}
 
int gcd_calc(int d1,int d2)
{
   int i,gcd=1;
   for(i=2;i<=d1&&i<=d2;i++)
   {
       if(d1%i==0&&d2%i==0)
       {
           gcd = i;
       }
   }
   return gcd;
}

void output(struct Fract a, struct Fract b,struct Fract c)
{
    printf("The sum of %d/%d and %d/%d is %d/%d",a.n,a.d,b.n,b.d,c.n,c.d);
}