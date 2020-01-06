//https://quera.ir/problemset/university/616
//Solved by: kasrazarei39
#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    double i=0;
    double c=0;
           scanf("%lf",&a);
        if(a<0) printf("1");
        else{
            while(c<=a){
            c=pow(2,i);
            i++;


            }
        }
                printf("%.0lf",c);


    return 0;
}

