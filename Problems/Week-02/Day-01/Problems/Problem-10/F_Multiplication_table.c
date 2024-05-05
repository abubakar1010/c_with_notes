#include <stdio.h>

int main()

{
        int value;

        scanf("%d", &value);

        for (int i = 1; i <= 12; i++)
        {
        int results = value * i ;
            printf("%d * %d = %d\n", value, i, results);
        }
        
    return 0;
}