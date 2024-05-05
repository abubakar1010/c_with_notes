#include <stdio.h>

int main()

{
        int n;

        scanf("%d", &n);

        for (int i = 1; i < 2; i++)
        {
            if (  (n % 10) % (n / 10) == 0 || (n / 10) % (n % 10) == 0)
            {
                printf("YES");
            }else{
                printf("NO");
            }
            
        }
        
    return 0;
}
