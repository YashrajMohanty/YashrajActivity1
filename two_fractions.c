#include<stdio.h>

struct fraction
{
   int x[100];
   int y[100];
};

int input(struct fraction *p)
{
   for(int i=0;i<2;i++)
   {
       printf("Enter numerator for fraction %d:",i+1);
       scanf("%d",&(*p).x[i]);
       printf("Enter denominator for fraction %d:",i+1);
       scanf("%d",&(*p).y[i]);
   }
}

int addnum(struct fraction a)
{
   int num,sumn=0;
   for(int i=0;i<2;i++)
   {
      for(int j=0;j<2;j++)
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

int addden(struct fraction a)
{
   int den=1,sumd=0;
   for(int i=0;i<2;i++)
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

void add2frac()
{
   struct fraction a;
   int sumn,sumd,finalgcd;
   input(&a);
   sumn=addnum(a);
   sumd=addden(a);
   finalgcd=gcd(sumn,sumd);
   output(sumn,sumd,finalgcd);
}

void main()
{
    add2frac();
}