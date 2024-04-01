#include <stdio.h>

int main()

{
    int price;

    scanf("%d", &price);

    if ( price <= 100)
    {
        printf("Eat food\n");
    }

    else
    {
        printf("Need More Money\n");
    }

    if ( price >= 700)
    {
        printf("Eat Without desert\n");
    }
    else if ( price >= 500)
    {
        printf("Eat with desert\n");
    }
    else
    {
        printf("don't eat anything in here\n");
    }
    
    if ( price >= 5000 )
    {
        printf("Go to National Library\n");
        if ( price >= 8000)
        {
            printf("Buy maximum 8 books\n");
        }
        else
        {
            printf("Don't buy anything from here\n");
        }
        
    }
    else if (price >= 1000)
    {
        printf("Go to in Local Shop\n");
    }
    else
    {
        printf("stay home");
    }
    
    
    return 0;
    
}