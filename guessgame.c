#include<stdio.h>
int main()
{
    int secretnumber = 4;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    int outofguess = 0;
    while(guess!=secretnumber && outofguess==0)
    {
        if(guesscount<guesslimit)
        {

            printf("Guess a number between 1 and 10: ");
            scanf("%d", &guess);
            guesscount++;
        }
        else
        {
            outofguess = 1;
        }
       

    }
    if(outofguess==1)
    {
        printf("You are out of guesses! The number was %d.\n", secretnumber);
    }
    else
    {
        printf("you win , the number 4 is right");
    }
    return 0;
}