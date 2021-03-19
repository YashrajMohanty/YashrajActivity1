#include<stdio.h>

typedef struct stud
{
    char name[100];
    char grade;
    int marks[10];
    float finalscore;
}students;

typedef struct gradebook
{
    char subname[100];
    int m;
    int k;
    float weight[30];
    students student[30];
    float totalweight;
}gbooks;

int inputn()
{
    int n;
    printf("Enter the number of gradebooks:");
    scanf("%d",&n);
    return n;
}

students inputstud(int k)
{	
	students s;
	scanf("%s",s.name);
	for(int q=0;q<k;q++)
	{
		scanf("%d",&s.marks[q]);
	}
	return s;
}

gbooks inputgbook( )
{
	gbooks a;
	scanf("%s",a.subname);
	scanf("%d%d",&a.m,&a.k);
	for(int j=0;j<a.k;j++)
	{
		scanf("%f",&a.weight[j]);
	}
	for(int p=0;p<a.m;p++)
	{
		a.student[p]=inputstud(a.k);
	}
	return a;
}

void inputngbook(int n, gbooks gb[n])
{
	for(int i=0;i<n;i++)
	{
		gb[i]=inputgbook();
	}
}

char grade(students grd)
{
	if(grd.finalscore>=0 && grd.finalscore<60)
		grd.grade='F';
	else if(60<=grd.finalscore && grd.finalscore<70)
		grd.grade='D';
	else if(70<=grd.finalscore && grd.finalscore<80)
		grd.grade='C';
    else if(80<=grd.finalscore && grd.finalscore<90)
		grd.grade='B';
	else
		grd.grade='A';
    return grd.grade;
}

void compute(students *st, gbooks *g)
{
	st->finalscore=0;
	for(int i=0;i<g->k;i++)
    {
        st->finalscore+=(g->weight[i]*st->marks[i])/g->totalweight;
        st->grade=grade(*st);
    }
}

void computegbook(gbooks *b)
{
    b->totalweight=0;
    for(int i=0;i<b->k;i++)
    {
	    b->totalweight+=b->weight[i];
    }
	for(int j=0;j<b->m;j++)
	{
		compute(&b->student[j], b);
	}	
}

void compute_ngbook(int n,gbooks ag[n])
{
	for(int i=0;i<n;i++)
	{
		computegbook(&ag[i]);
	}
}

void printstud(students std)
{
	printf("%s\t",std.name);
	printf("%.2f  ",std.finalscore);
	printf("%c\n",std.grade);
}

void display(int n, gbooks ab[n])
{
	for(int i=0;i<n;i++)
	{
	    printf("%s\n",ab[i].subname);
		for(int j=0;j<ab->m;j++)
		{
			printstud(ab[i].student[j]);
		}
	}
}

int main()
{
    int n;
    n=inputn();
    gbooks g[n];
    inputngbook(n,g);
    compute_ngbook(n,g);
    display(n,g);
    return 0;
}