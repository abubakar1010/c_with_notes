// You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.


// For example:
// Inputs are 5 and 2
// Then you’ll give output as:
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50


// Sample Input

// 5 2 

// Sample Output

// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50



// Sample Input

// 10 3

// Sample Output

// 10 + 3 = 13
// 10 - 3 = 7
// 10 * 3 = 30
// 10 / 3 = 3.33


#include <stdio.h>

int main()

{
    int a, b;

    scanf("%d %d", &a, &b);

    int summation = a + b, subtraction = a - b, multiplication = a * b;

    float division = a * 1.0 / b;

    // printf( "%d", a ,"+", "%d", b, "=", "%d", summation);

    printf( " %d + %d = %d\n", a, b, summation);
    printf( " %d - %d = %d\n", a, b, subtraction);
    printf( " %d * %d = %d\n", a, b, multiplication);
    printf( " %d / %d = %0.2f\n", a, b, division);

    return 0;
}