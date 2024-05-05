#include <stdio.h>

int main()

{
    int n, s, k;
    scanf("%d", &n);
    k = 1;
    s = n - 1;

    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i >= n)
        {
            s++;
            k -= 2;
        }
        else
        {
            s--;
            k += 2;
        }
        printf("\n");
    }

    return 0;
}