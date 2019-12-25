//https://quera.ir/problemset/contest/4065
//Solved by: kasrazarei39
#include <stdio.h>


int main()
{
    int a , b , l;
    scanf("%d %d %d", &a, &b, &l);
    int t = 0;
    while (l > 0)
    {
        t += a;
        l--;
        if (l == 0)
            break;
        t += b;
        l--;
    }
    printf("%d", t);
    return 0;
}
