#include <stdio.h>

int main()

{
    int i;
    for ( i = 1; i <= 10; i++)
    {
        printf("Hello World\n");
    }
    
    printf("%d", i);
    return 0;
}

// Flow of for loop

// initialization --> condition ---> print --> increment ---> condition ---> print ---> increment -->  condition ---> print ---> increment --> .....