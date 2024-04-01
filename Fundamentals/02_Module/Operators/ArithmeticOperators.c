#include <stdio.h>

int main()

{

    int a = 12, b = 8;

    int sum = a + b ;

    int subtraction = a - b ;

    int exponent = a * b ;

    float divide = a * 1.0 / b ;

    int reminder = a % b;

    printf("%d %d %d %f %d", sum, subtraction, exponent, divide, reminder);

    return 0;
}