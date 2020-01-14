//https://quera.ir/problemset/university/588
//Solved by: kasrazarei39
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int i;
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&x[i]);
    }
    int max = x[0];
    for(i=1 ; i<n ; i++)
    {
        if(max<x[i])
        {
           max = x[i];
        }
    }
    printf("%d",max);



    return 0;
}
