#include <stdio.h>
#include <string.h>

int main()

{
    int n;
    scanf("%d", &n);
    char s[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        if (strlen(s) <= 10)
        {
            printf("%s\n", s);
        }else{
            printf("%c%d%c\n", s[0], strlen(s)-2, s[(strlen(s) - 1)]);
        }
    }

    return 0;
}