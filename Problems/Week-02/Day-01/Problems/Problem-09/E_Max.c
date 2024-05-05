#include <stdio.h>

int main()

{
    int max = 0, range, value;

    scanf("%d\n", &range);

    for (int i = 1; i <= range; i++)
    {
        scanf("%d\n", &value);
        if (value > max)
        {
            max = value;
        }
    }

    printf("%d", max);

    return 0;
}