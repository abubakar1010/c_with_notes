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

        int j = n-1;
        printf("%d ", j);

        for (int i = 0; i < j; i++)
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            j--;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", ar[i]);
        }
        
    return 0;
}