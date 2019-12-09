//https://quera.ir/problemset/contest/34081
//Solved by: kasrazarei39
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, cnt = 0, x = 1;
    scanf("%d %d", &a, &b);
    while(1)
    {
        x += b;
        cnt++;
        if ( x > a + 1)
            x -= a;
        if (x == a + 1)
            break;
    }
    printf("%d", cnt);



    return 0;
}
