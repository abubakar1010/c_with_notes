// syntax of while loop 

/*

        initialization

        while(condition){

            code

            increment / decrement statement
        }

*/

#include <stdio.h>

int main()

{
    int i = 0;

    while ( i <= 10)
    {
        printf("%d\n", i);

        i++;
    }
    return 0;
}