#include <stdio.h>
#include <string.h>
int main()

{
        char str[100];
        scanf("%s", str);

        int count[26] = {0};

        for (int i = 0; i < strlen(str); i++)
        {
            int value = str[i] - 97;
            // printf("%d ", value);
            count[value]++;
        }

        for (int i = 0; i < 26; i++)
        {
        printf("%c - %d\n", i+97, count[i]);
            
        }
        

        
    return 0;
}