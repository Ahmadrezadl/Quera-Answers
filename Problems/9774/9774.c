//https://quera.ir/problemset/university/9774
//Solved by: kasrazarei39
#include <stdio.h>

int main()
{
    int a,m;

    int i=0,n=0;
    scanf("%d",&a);
    int q = a;
    int t = 0;
    while ( q % 10 == 0)
    {
        q /= 10;
        t++;
    }


        if(a<0) a=a*-1;
        while(a!=0){
            n=n*10;
            n=n+a%10;
            a=a/10;
        }
        while(n!=0){
            m = n % 10;
                        printf("%d: ",m);


                while(i<m){
                    printf("%d",m);

                    i++;

                }
            printf("\n");
              n=n-m;
              n=n/10;
              i=0;


        }
        while (t > 0)
        {
            printf("0: \n");
            t--;
        }


    return 0;
}
