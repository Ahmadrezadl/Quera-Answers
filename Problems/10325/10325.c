//https://quera.ir/problemset/contest/10325
//Solved by: kasrazarei39
#include <stdio.h>

int main()
{
    int a,b;
    int d=0,e=0;
        scanf("%d%d",&b,&a);
            if(a<=10)
            {
                d=11-b;
                printf("Right %d %d",d,a);

            }
            else
            {
                d=11-b;
                e=21-a;
                printf("Left %d %d",d,e);
            }



    return 0;
}
