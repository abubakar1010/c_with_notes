
#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {

        if ( i == 5)
        {

            // if hit continue then avoid all code after continue in current code blocks

            continue;
        }
        printf("%d\n",i);

    }

    return 0;
    
}