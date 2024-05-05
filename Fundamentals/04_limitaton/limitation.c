#include <stdio.h>

int main()

{
    long long int score;
    int af;
    double floating;

    scanf("%lld %d %lf", &score, &af, &floating);

    printf("%lld %d %lf", score, af, floating);
    return 0;
}