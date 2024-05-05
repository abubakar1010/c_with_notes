#include <stdio.h>
#include <string.h>
int main()

{
        char str[70];
        // scanf("%s", &str);
        fgets(str, 12, stdin);
        printf("%s\n", str);

        int sz= sizeof(str);
        printf("%d", sz);
    return 0;
}