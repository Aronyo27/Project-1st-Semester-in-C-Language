// ~~ ARONYO BARAL

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int guess_Number,count=0;
    
    srand(time(0));
   
    printf("\t\t\tLETS SEE YOUR GUESSING CAPABILITY. \n \t\t\tWELCOME TO THE WORLD OF GUESSING NUMBER GAME.\n\n");
    int random_Number=(rand()%100)+1;
    do{
        printf("Please Enter Your Guessing Number between 1 to 100 : ");
        scanf("%d",& guess_Number);
        count++;
        printf("\n");

        if(guess_Number>random_Number)
        {   
            printf("Your Guessing Number Is Larger than Actual Number.\n\n");
        }
        else if(guess_Number<random_Number)
        {
            printf("Your Guessing Number Is Smaller than Actual Number.\n\n");
        }
        else 
        {
            printf("\t\t\tBOOYAH ! \n \t\t\tCONGRATULATIONS ! YOU SUCCESSFULLY GUESS THE CORRECT NUMBER :)\n");
            printf("Your Attempt Number is %d.\n\n\n",count);
        }
        
    } while (guess_Number!=random_Number);
    
    printf("\t\t\tTHANKS FOR PLAYING ~ ARONYO BARAL.!");
    return 0;
}
