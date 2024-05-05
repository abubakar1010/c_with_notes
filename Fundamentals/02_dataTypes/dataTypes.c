// 1. int ---> integer( ..., -1, 0 , 1 ....)

//2. float ---> floating number( ...., -0.1, 0.1,.....)

//char -----> character ( a, v, $, & all key of key board). character always comes in '' single quotation.

//bool ---> true / false


#include <stdio.h>

int main()
{
    int score = 120;
    int anotherScore = 200;

    float partialScore = 3.337;

    char letter = 'a';

    printf("%d %d %0.2f %c", score, anotherScore, partialScore, letter);

    return 0;
}