#include <stdio.h>
#include <string.h>

int main()

{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int comp = strcmp(a,b);

    if (comp > 0)
    {
        printf("B Small");
    }else if ( comp < 0)
    {
        printf("A Small");
    }else{
        printf("equal");
    }
    
    
    return 0;
}