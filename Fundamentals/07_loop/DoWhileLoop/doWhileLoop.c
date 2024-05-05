// syntax of do while loop

/* 

    initialization

    do{
        code that be execute

        increment / decrement
    }

    while(condition)

*/


#include <stdio.h>

int main()

{

    int i = 0;

    do
    {
        printf("%d\n",i);
        i++;
    } while (i <= 10);
    
    return 0;
}

/*

    do while loop must be execute code first time before check condition. if condition dose not match it will not create any problem for first time execution

*/