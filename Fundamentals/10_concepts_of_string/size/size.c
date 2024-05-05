#include <stdio.h>

int main()

{
        int ar[5];

        int sz = sizeof(ar) / sizeof(int);
        printf("%d\n", sz);

        char str[9];

        int szOfStr = sizeof(str);
        printf("%d", szOfStr);
    return 0;
}