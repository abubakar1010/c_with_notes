#include <stdio.h>

int main()

{

    int i ;
    for (i = 0; i <= 10; i++)
    {
        

        printf("%d\n", i);

        if ( i == 6)
        {
            // if hit break the code blocks immediately closed
            
            break; 
        }
        
    }
    return 0;

}

