//https://quera.ir/problemset/university/292
//Solved by: kasrazarei39
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    float arr[1000];
    int i;
    for (i = 0; i < n; i++)
        scanf("%f", &arr[i]);
    float avg, sum = 0;
    for (i = 0; i < n; i++)
        sum += arr[i];
    avg = sum / n;
    float max = arr[0];
    for (i = 1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    float min = arr[0];
    for (i = 1; i < n; i++)
        if (min > arr[i])
            min = arr[i];
    printf("Max: %.3f\nMin: %.3f\nAvg: %.3f", max, min, avg);
    return 0;
}
