//https://quera.ir/problemset/university/282
//Solved by: kasrazarei39
#include <stdio.h>

int main()
{
    int a;
    int i=1;
    int m=0;
    int n=0;
        scanf("%d",&a);
            while(i<a){
                m=a%i;
                    if(m==0){
                       n+=i;
                       }

                m=0;
                i++;

            }
            if(n==a)
            {printf("YES");
            }
            else{
                printf("NO");
            }

    return 0;
}

