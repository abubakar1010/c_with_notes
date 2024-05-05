#include <stdio.h>

int main()

{
        int n;
        scanf("%d", &n);

        int ar[n];
        int x;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        scanf("%d", &x);

        for (int i = 0; i < n; i++)
        {
            if ( ar[i] == x)
            {
                printf("%d", i);
                break;
            }else if ( i == n-1)
            {
                printf("-1");
            }
            
            
        }
        
        
    return 0;
}