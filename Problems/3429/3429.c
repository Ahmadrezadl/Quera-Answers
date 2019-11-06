//https://quera.ir/problemset/contest/3429/
//Solve by: Ahmadrezadl
#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	if (T>100)
	{
	printf("Steam");
	}
	else if (T<0)
	{
	printf("Ice");
	}
	else
	printf("Water");
    return 0;
}

