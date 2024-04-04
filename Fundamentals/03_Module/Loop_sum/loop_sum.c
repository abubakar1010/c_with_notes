#include <stdio.h>

int main()

{

    int sum = 0;

    int i;

    int n;

    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
    
}


// 1 + 2 + ... + n = n * (n + 1) / 2