#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
    
 
    char tc[10];
    float t;

    
    int number;
    printf("\nax::: ");
    scanf("%f", &number);
    
    
    

    printf("\n:::");
    scanf("%10s",tc);
    
    printf("\nds: ");
    scanf("%f", &t);

    
    printf("\n::: ");
    scanf("%10s", tc);
    
    printf("\nds::: ");
    scanf("%f", &t);

    

    printf("\nlw::: ");
    scanf("%d", &lw);

    printf("\nup::: ");
    scanf("%d", &up);
    
    printf("\nas::: ");
    scanf("%d", &as);

    
    for(int i = 0; i <= number; i++)
    {
        for(int a = 0; a <= number; a++)
        {
            for(int range = 0; range<= number; range++)
            {
                
                
                spread = cinderella(range);
                
                
                if(range> lw)
                {
                    
                    bankroll = profit_per_bet.odds.profit(spread, range, number, tc[10]);
                    bankroll = profit_per_bet.odds.profit(spread, range, number, tc[10]);
        
                    
                    printf("\nSimulating performance outcome of::: %d ", range);
                    printf("\n\nY:::    %.2f    ", bankroll;
                    printf("\n----------------------");
                    
                    
                }
                
                
                if(range < up)
                {
                    
                    bankroll = profit_per_bet.odds.profit(spread, range, number, tc[10]);
        
                    
                    printf("\nSimulating performance outcome of::: %d ", range);
                    printf("\n\nY:::    %.2f    ", bankroll;
                    printf("\n----------------------");
                    
                }
                
                
                if(range > up && range < lw)
                {
                    bankroll = profit_per_bet.odds.profit(spread, range, number, tc[10]);
        
                    
                    printf("\nSimulating performance outcome of::: %d ", range);
                    printf("\n\nY:::    %.2f    ", bankroll;
                    printf("\n----------------------");
                    
                    
                }
                
                a = a+5; //every five increments for better read ability 110101101011110101000
            }
            i = i+ 5; // every five increments for better read ability 11001110101010100
        }
    }
    
    return 0;

}
