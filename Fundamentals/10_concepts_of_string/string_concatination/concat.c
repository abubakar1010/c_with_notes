#include <stdio.h>
#include <string.h>
int main()

{
        char a[100], b[100];
        scanf("%s %s", a, b);
        printf("%s %s ",a, b);


        int k = strlen(a);
        int i = 0;

        while ( i <= strlen(b))
        {
            a[k] = b[i];
            k++;
            i++;
        }

        printf("%s",a);
        
    return 0;
}