//https://quera.ir/problemset/university/9773
//Solved by: kasrazarei39

#include <stdio.h>


int main()
{
    int n ;
    scanf( "%d",&n);
    int i = 1 , k ;
    int m , j = (n-1)/2;
    int b;
    for ( i = 1 ; i <= n ; i=i+2)
    {
       for ( m = 0 ; m  < j ; m ++)
       {
           printf(" ");
       }
            j = j - 1 ;


        for (k=0; k<i; k++)
        {
            printf("*");
        }

        for ( b = 0 ; b < 2*j+2 ; b ++)
        {
            printf(" ");
        }
        for (k=0; k<i; k++)
        {
            printf("*");
        }

        printf( " \n");
    }
    //printf("\n\n%d\n\n",j);

        for ( i = 1 ; i <= n ; i=i+2)
        {
           for ( m = 0 ; m  <= j+1 ; m ++)
           {
               printf(" ");
           }
           j = j + 1 ;

        for (k=n-2; k>=i; k--)
        {
            printf("*");
        }

 for ( b = 0 ; b < 2*j+2 ; b ++)
        {
            printf(" ");
        }
           for (k=n-2; k>=i; k--)
        {
            printf("*");
        }
     printf("\n");




        }

    return 0;
}
