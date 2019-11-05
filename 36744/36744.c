//https://quera.ir/problemset/contest/3540/
//Solve by: Ahmadrezadl
#include <stdio.h>
int main()
{
	int x,y,n , i , j;
	scanf ("%d %d %d",&x,&y,&n);
	for (i = 0;i*y<=x;i++)
	{
		for (j = 0;j*n<=x;j++)
		{
			if (i*y+j*n==x)
			break;
			
		} 
		if (i*y+j*n==x)
			break;
	}
	if (i*y>x)
	printf("-1");
	else
	printf("%d %d",i,j);
	
}	

