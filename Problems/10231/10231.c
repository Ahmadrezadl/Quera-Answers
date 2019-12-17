//https://quera.ir/problemset/contest/10231
//Solved by: kasrazarei39
#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[20];
    char arr2[20];
    char arr3[20];
    char arr4[20];
    char arr5[20];
    gets(arr1);
    gets(arr2);
    gets(arr3);
    gets(arr4);
    gets(arr5);
    int a, b, cnt = 0;;
    a = strstr(arr1, "MOLANA");
    b = strstr(arr1, "HAFEZ");
    if (a || b)
    {
        printf("1 ");
        cnt++;
    }
    a = strstr(arr2, "MOLANA");
    b = strstr(arr2, "HAFEZ");
    if (a || b)
    {
        printf("2 ");
        cnt++;
    }
    a = strstr(arr3, "MOLANA");
    b = strstr(arr3, "HAFEZ");
    if (a || b)
    {
        printf("3 ");
        cnt++;
    }
    a = strstr(arr4, "MOLANA");
    b = strstr(arr4, "HAFEZ");
    if (a || b)
    {
        printf("4 ");
        cnt++;
    }
    a = strstr(arr5, "MOLANA");
    b = strstr(arr5, "HAFEZ");
    if (a || b)
    {
        printf("5 ");
        cnt++;
    }
    if (!cnt)
        printf("NOT FOUND!");


    return 0;
}
