#include <stdio.h>

int main()

{
    char n;

    scanf("%c", &n);

    int asciValueOfInput = n;

    if ( n < 97)
    {

        int result = n + 32;

        printf("%c", result);
    }
    else
    {

        int result = n - 32;

        printf("%c", result);
    }

    return 0;
}