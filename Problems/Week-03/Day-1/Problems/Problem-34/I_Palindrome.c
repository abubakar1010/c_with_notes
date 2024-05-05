#include <stdio.h>
#include <string.h>

int main()

{
        char str[1001];

        scanf("%s", str);

        char newStr[1001] = {0};

        int k = 0;

        for (int i = strlen(str) - 1; i >= 0; i--)
        {
            newStr[k] = str[i];
            k++;

            if (i == 0)
            {
                newStr[k] = '\0';
            }
            

            
        }

char result[4];
        
        for (int i = 0; i <= strlen(str); i++)
        {
            // printf("1%c 2%c ", str[i], newStr[i]);
            if ( str[i] != newStr[i])
            {
                char result = 'YES';
                break;
            }else{
                char result = 'NO';
            }

            
        }

        printf("%s",result);
        
        


    return 0;
}