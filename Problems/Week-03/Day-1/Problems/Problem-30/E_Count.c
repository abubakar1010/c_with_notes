#include <stdio.h>
#include <string.h>
int main()

{
        char s[1000001];
        scanf("%s", s);

        int count = 0;

        for (int i = 0; i<strlen(s) ; i++)
        {
            count += s[i] - 48;
        }
        printf("%d", count);
        
    return 0;
}