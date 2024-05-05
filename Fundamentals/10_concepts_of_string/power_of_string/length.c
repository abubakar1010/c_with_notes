#include <stdio.h>
#include <string.h>
int main()

{
        char str[100];
        scanf("%s", &str);
        // int count = 0;

        // for (int i = 0; str[i] != '\0'; i++)
        // {
        //     count++;
        // }

        int length = strlen(str);
        printf("%d", length);
    return 0;
}