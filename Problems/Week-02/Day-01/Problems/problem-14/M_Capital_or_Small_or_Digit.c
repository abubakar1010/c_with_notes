#include <stdio.h>

int main()

{
        char input;
        scanf("%c", &input);
        if ( input >= 48 && input <= 57)
        {
            printf("IS DIGIT");
        }else{
            printf("ALPHA\n");
            if ( input >= 65 && input <= 90)
        {
            printf("IS CAPITAL\n");
        }
        else if ( input >= 97 && input <= 122)
        {
            printf("IS SMALL\n");
        }
        }
        
        
    return 0;
}