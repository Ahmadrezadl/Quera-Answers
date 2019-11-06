//https://quera.ir/problemset/university/596/
//Solve by: Farnood Setoode
#include<stdio.h>
int i;
long int x;
long int fib(x)
{
	if (x==1)
	{
		i=0;
		return 1;
	}
	int a1=1,a2=2,a3=1;
	while(a3<=x)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
		i++;
	}
	return a1;
}
int main ()
{
	long int z;
	scanf("%ld",&z);
	while (z>0)
	{
		z-=fib(z);
		i++;
		printf("%d ",i);
		i=0;
	}

}
