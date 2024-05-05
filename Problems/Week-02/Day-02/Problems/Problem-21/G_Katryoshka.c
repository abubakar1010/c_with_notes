#include <stdio.h>

int main()

{
    long long int e, m, b, c = 0;

    scanf("%lld %lld %lld", &e, &m, &b);

    if (e > 0 && m > 0 && b > 0)
    {
        if ( e <= m && e <= b)
        {
            printf("%d", e);
        }else if ( m <= e && m <= b)
        {
            if ( ( e - m) / 2 < (b-m))
            {
            long long int s = ( e - m) / 2 ;
            printf("%d", m + s);
            }else if ( ( e - m) / 2 > b)
            {
                printf("%d", b);
            }else if ( e > b)
            {
                printf("%d", b);
            }

        }else{
            printf("%d", b);

        }
    }else{
        printf("0");
    }
    
    return 0;
}