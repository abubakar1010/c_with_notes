#include <stdio.h>

int main()

{
        int ar[5] ={5, 8, 9, 2, 4};
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", ar[i]);
        }
        char str[5] ={'o', 's', 'm', 'a', 'n'};
        for (int i = 0; i < 5; i++)
        {
            printf("%c", str[i]);
        }

        //super power of initialization
        printf(" ");

        char supStr[4] ="omar";
        for (int i = 0; i < 4; i++)
        {
            printf("%c", supStr[i]);
        }

        char pSupStr[9] = "abdullah";
        printf(" ");

        printf("%s", pSupStr);

            return 0;
}