//https://quera.ir/problemset/contest/10230
//Solved by: kasrazarei39
#include <stdio.h>

int main()
{
    int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
            if(a>0 && b>0 && c>0)
            {
                if(a+b+c==180)
                {
                    printf("Yes");
                }
                else
                {
                    printf("No");
                }
            }
                    else
                {
                    printf("No");
                }


    return 0;
}

