// Question:

// You need to take one integer value as input and tell if the value is positive or negative or zero.
// See the sample input and output for more clarification.


// Sample Input

// 10


// Sample Output


// positive

// Sample Input


// -50


// Sample Output


// negative

// Sample Input


// 0

// Sample Output


// zero


#include <stdio.h>

int main()
{

    int z;

    scanf("%d", &z);

    if ( z == 0)
    {
        printf("zero");
    }
    else if ( z > 0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    
    return 0;
}