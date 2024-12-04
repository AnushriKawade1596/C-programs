#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
    int number,Random,attempts=0;
    
    srand(time(NULL));
    printf("Welcome to the game of guessing the numbers!!\n");
    Random = (rand() % 100 + 1);

    do
    {
        printf("Enter a number between (1 to 100):\n ");
        scanf("%d",&number);
        attempts++;
    
        if(number>Random)
        {
            printf(" ohh oo!\nGuess a smaller number!!\n");
            
        }

        else if (number<Random)
        {
            printf(" ohh oo!\nGuess a larger number!!\n");
        }

        else 
        {
            printf("Yaayyy!!\nYou guessed it right in %d attempts!!\n", attempts);
        }
    } while (number!=Random);

    printf("Bye! Hope you enjoyed!\n ANUSHRI KAWADE");

    return 0;
    
}