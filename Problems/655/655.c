//https://quera.ir/problemset/university/655
//Solved by: kasrazarei39
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d\n" ,&n);
    char a[n][1000];
    int j = 0;
    while (j < n)
    {
        gets(a[j]);
        int len;
        len = strlen(a[j]);
        int i;
        for (i = 0; i < len; i++)
            a[j][i] = tolower(a[j][i]);
        a[j][0] = toupper(a[j][0]);
        for (i = 0; i < len - 1; i++)
            if (a[j][i] == ' ')
                a[j][i + 1] = toupper(a[j][i + 1]);
        j++;
    }
    int i;
    for ( i = 0; i < n; i++)
        puts(a[i]);
    return 0;
}
