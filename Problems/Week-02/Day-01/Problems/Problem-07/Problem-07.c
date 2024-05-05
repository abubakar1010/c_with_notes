#include <stdio.h>

int main()

{
    int range;
    int value;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    scanf("%d\n", &range);

    for (int i = 1; i <= range; i++)
    {
        scanf("%d", &value);
        if (value % 2 == 0)
        {
            even++;
        }
        if (value % 2 != 0)
        {
            odd++;
        }
        if (value > 0)
        {
            positive++;
        }
        if (value < 0)
        {
            negative++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}