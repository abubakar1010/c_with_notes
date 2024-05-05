#include <stdio.h>

    // basic function structure

    // data_types function_name( parameters ){
    //     codes
    //     return ??
    // }

    // call function with parameters

    // function_name(parameters)

    int sum(int x, int y)
    {
        int sum = x + y;
        return sum;
    }

int main()

{

    int s = sum(10, 6);

    printf("%d ", s);
    printf("%d ", sum(200, 300));

    return 0;
}