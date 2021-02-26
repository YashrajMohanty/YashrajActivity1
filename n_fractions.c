//WAP to find the sum of n fractions.
#include<stdio.h>
typedef struct 
{
    int n;
    int d;
}frac;

 
frac input();
void compute(int);
frac sum(frac,frac);
int gcd(int,int);
void output(frac);
 
void addfrac()
{
    int n,i;
    frac a,tot;
    printf("Enter the number of fractions:");
    scanf("%d",&n);
    frac f[n];
    compute(n);
}
 
frac input()
{
    frac f;
    printf("Enter the numerator:");
    scanf("%d",&f.n);
    printf("Enter the denominator:");
    scanf("%d",&f.d);
    return f;
}
 
int gcd(int n, int d)
{
    int i,gcd;
    for(i=1;i<=n && i<=d;i++)
    {
        if(n%i==0 && d%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}

void compute(int n)
{
    int i;
    frac tot,a,f[n];
    for(i=0;i<n;i++)
    {
        printf("Fraction %d\n",i+1);
        f[i]=input();
    }
    if(n==1)
    {
        tot=f[0];
    }
    else
    {
        a=f[0];
        for(i=0;i<n-1;i++)
        {
            tot=sum(a,f[i+1]);
            a=tot;
        }
    }
    output(tot);
}
 
frac sum(frac fract1, frac fract2)
{
    frac fract3;
    int c;
    fract3.n=((fract1.n*fract2.d)+(fract2.n*fract1.d));
    fract3.d=fract1.d*fract2.d;
    c=gcd(fract3.n,fract3.d);
    fract3.n=fract3.n/c;
    fract3.d=fract3.d/c;
    return fract3;
}
 
void output(frac total)
{
    printf("The sum of the fractions is %d / %d",total.n,total.d);
}

void main()
{
    addfrac();
}