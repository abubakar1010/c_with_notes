#include <stdio.h>

int main()

{

    int n;
    scanf("%d", &n);
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int count[8] = {0};

        for (int i = 0; i < n; i++)
        {
            int val = ar[i];
                count[val]++;
                
        }

        for (int i = 0; i < 8; i++)
        {
            printf("%d - %d\n", i, count[i]);
        }

        
        
        
    return 0;
}