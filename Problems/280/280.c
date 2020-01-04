//https://quera.ir/problemset/university/280
//Solved by: kasrazarei39
#include <stdio.h>

int main()
{
    int a,b,c;
    int z=0;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b && a>c) {
    z=c;
    c=a;
    a=z;

    }
        if(b>a && b>c) {
    z=c;
    c=b;
    b=z;

    }


    if(c*c==a*a + b*b)
    printf("YES");
    else printf("NO");
    return 0;
}
