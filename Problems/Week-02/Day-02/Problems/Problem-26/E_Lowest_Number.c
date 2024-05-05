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

        int min = ar[0];
        int p = 0;

        for (int i = 0; i < n; i++)
        {
            if ( ar[i] < min )
            {
                min = ar[i];
                p = i;
            }
            
        }

        printf("%d %d", min, p+1);
        
        
    return 0;
}