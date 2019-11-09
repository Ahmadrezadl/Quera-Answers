//https://quera.ir/problemset/contest/3417/
//Solve by: Farnood Setoode
#include<stdio.h>
int f(int x)
{
	int k;
	if (x==0)
	    return 1;
	for (int i=1;i<=54;i++)
	{
		int sum=0;
		k=x-i;
		for (k;k>0;k/=10)
			sum+=k%10;
		if (i==sum)
			return 1;
	}
	return 0;
}
int main ()
{
	int n,x;
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%d",&x);
		if (f(x))
		printf("Yes\n");
		else
		printf("No\n");
		n--;
	}
}
