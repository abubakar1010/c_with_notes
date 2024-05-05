#include <stdio.h>

int main()

{
        char a[100], b[100];
        scanf("%s %s",a, b);

        int i=0;

        while (1)
        {
            if ( a[i] == '\0' && b[i] == '\0')
            {
                printf("EQUAL");
                break;
            }else if (a[i] == '\0')
            {
                printf("a SMALL");
                break;
            }else if (b[i] == '\0')
            {
                printf("b SMALL");
                break;
            }else if ( a[i] == b[i])
            {
                
                i++;
            }else if ( a[i] > b[i])
            {
                printf("b SMALL");
                break;
            }else{
                printf("a SMALL");
                break;
            }
            
            
            
            
        }
        
    return 0;
}