//https://quera.ir/problemset/contest/6082/
//solve by: Farnood Setoode
#include <stdio.h>
int main()
{
	int x,y,sum=0,i=0,j=0;
	char z;
	scanf("%d %d",&x,&y);
	for (i;i<y;i++)
	{
		for (j;j<x;j++)
		{
			scanf(" %c",&z);
			if (z=='*')
			sum++;
		}
		j=0;

	}
	printf ("%d",sum);
}
