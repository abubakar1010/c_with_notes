#include <stdio.h>

int main()

{
        int n, s, v;

        scanf("%d", &n);

        s = n-1;
        v=1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < v; j++)
            {
                printf("*");
            }
            v += 2;
            s--;
            printf("\n");
            
        }
        
    return 0;
}