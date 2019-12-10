//https://quera.ir/problemset/contest/3539
//Solved by: kasrazarei39
#include <stdio.h>
#include <string.h>

int main()
{
   long int n, m;
    scanf("%ld",&n);

    m = n%9;

    if (m == 0)
    {
        printf("9");
        return 0;
    }
    printf("%ld", m);
    return 0;
}
