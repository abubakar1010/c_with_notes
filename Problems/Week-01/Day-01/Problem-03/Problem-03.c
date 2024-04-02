// You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.
// See the sample input and output for more clarification.

// Sample Input


// 10


// Sample Output


//even


// Sample Input

// 3


// Sample Output


//odd

#include <stdio.h>

int main()

{
    int a;

    scanf("%d", &a);

    if ( a % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    return 0;
}