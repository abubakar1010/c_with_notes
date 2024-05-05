#include <stdio.h>

int main()

{
        
        long long int a, b,c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if ( a + b - c == d)
        {
            printf("YES");
        }else if ( a + b * c == d)
        {
            printf("YES");
        }else if ( a - b + c == d)
        {
            printf("YES");
        }else if ( a - b * c == d)
        {
            printf("YES");
        }else if ( a * b + c == d)
        {
            printf("YES");
        }else if ( a * b - c == d)
        {
            printf("YES");
        }else{
            printf("NO");
        }
        
        // printf("\n%d\n",a + b - c);
        // printf("%d\n",a + b * c);
        // printf("%d\n",a - b + c);
        // printf("%d\n",a - b * c);
        // printf("%d\n",a * b + c);
        // printf("%d\n",a * b - c);
        
    return 0;
}
