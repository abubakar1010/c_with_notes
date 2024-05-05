#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0], max = a[0], pmin = 0, pmax = 0;

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            pmin = i;
        }
        if (max < a[i])
        {
            max = a[i];
            pmax = i;
        }
    }

    a[pmax] = min;
    a[pmin] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}