//https://quera.ir/problemset/university/591
//Solved by: kasrazarei39
#include <stdio.h>

int main()
{
    int a;
    int i=0;
    int c=0;
        scanf("%d",&a);
       while(i<a){
        printf("*");
        i++;
       }
        printf("\n");
       i=0;
        while(i<a-2){
            printf("*");
                while(c<a-2){
                    printf(" ");
                    c++;
                }
            printf("*\n");
            c=0;
            i++;
            }

            i=0;
            while(i<a){
                printf("*");
                i++;
            }


    return 0;
}
