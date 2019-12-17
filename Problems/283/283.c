//https://quera.ir/problemset/university/283
//Solved by: kasrazarei39
#include <stdio.h>
#include <math.h>
int main()
{
    int n, m;
    scanf("%d\n%d", &n, &m);
    if (m >= n)
        printf("Wrong order!");
    else if ((n - m) % 2 != 0)
        printf("Wrong difference!");
    else
    {
        int i, j = 0;
        while (j < (n - m) / 2)
        {
            for (i = 0; i < n; i++)
                printf("* ");
                if (i == n)
                    printf("\n");
            j++;
        }
        j = 0;
        while (j < m)
        {
                for (i = 0; i < (n - m) / 2; i++)
                    printf("* ");
                for (i = 0; i < m; i++)
                    printf("  ");
                for (i = 0; i < (n - m) / 2; i++)
                    printf("* ");
                printf("\n");
                j++;
        }
        j = 0;
        while (j < (n - m) / 2)
        {
            for (i = 0; i < n; i++)
                printf("* ");
                if (i == n)
                    printf("\n");
            j++;
        }
    }







    return 0;
}
