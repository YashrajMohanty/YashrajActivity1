//WAP to find the sum of n fractions.
#include<stdio.h>

struct fraction
{
   int x[100];
   int y[100];
};

int inputn()
{
   int n;
   printf("Enter the value of n:");
   scanf("%d",&n);
   return n;
}

int input(int n,struct fraction *p)
{
   for(int i=0;i<n;i++)
   {
       printf("Enter numerator for fraction %d:",i+1);
       scanf("%d",&(*p).x[i]);
       printf("Enter denominator for fraction %d:",i+1);
       scanf("%d",&(*p).y[i]);
   }
}

int addnum(int n,struct fraction a)
{
   int num,sumn=0;
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
          if(j!=i)
          {
              a.x[i]=a.x[i]*a.y[j];
          }
          num=a.x[i];
      }
      sumn=sumn+num;
   }
   return sumn;
}

int addden(int n,struct fraction a)
{
   int den=1,sumd=0;
   for(int i=0;i<n;i++)
   {
      den=den*(a.y[i]);
      sumd=den;
   }
   return sumd;
}

int gcd(int sumn,int sumd)
{
    int finalgcd,min,i;
    if(sumn<=sumd)
    {
        min=sumn;
    }
    else
    {
        min=sumd;
    }
    for(i=2;i<=min;i++)
    {
        if(sumn%i==0 && sumd%i==0)
        {
            finalgcd=i;
        }
    }
    return finalgcd;
}

void output(int sumn,int sumd,int finalgcd)
{
   printf("The sum of the fractions is %d/%d",sumn/finalgcd,sumd/finalgcd);
}

void addfrac()
{
   struct fraction a;
   int sumn,sumd,n,finalgcd;
   n=inputn();
   input(n,&a);
   sumn=addnum(n,a);
   sumd=addden(n,a);
   finalgcd=gcd(sumn,sumd);
   output(sumn,sumd,finalgcd);
}

void main()
{
    addfrac();
}