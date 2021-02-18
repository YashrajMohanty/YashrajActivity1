#include <stdio.h>

int inputn()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    return n;
}

void enterelement(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d of array:",i+1);
        scanf("%d",&a[i]);
    }
}

int add(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}

int output(int sum)
{
    int i;
    printf("The sum is %d",sum);
}

int main()
{
    int n,sum;
    n=inputn();
    int a[n];
    enterelement(n,a);
    sum=add(n,a);
    output(sum);
}