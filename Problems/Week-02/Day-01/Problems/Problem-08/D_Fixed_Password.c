#include <stdio.h>

int main()

{

    int a;

    while (scanf("%d\n", &a) != EOF)
    {
        if (a == 1999)
        {
            printf("Correct\n");
            return 0;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}