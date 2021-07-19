#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    printf("Guessing number game!\n");
    int guess,i,chances=4;
    srand(time(0));/*This line is used to generate different numbers each time u run ur code rather than
    producing the same number*/ 
    int random_num = rand()%10 + 1;/*generates random numbers between 1 and 100 and if i just give rand()%100 
    generate a number between 0 to 100 so add 1 to it . so that it becomes 1 to 100*/
    for (chances;chances>=0;chances--)//you can do this using do while or while loop as well!
    {   

    printf("Guess the number !\n");
    scanf("%d",&guess); 
    
    if(guess<random_num){
        printf("The number u guessed is low\n");
        printf("Number of guess remaining: %d\n",chances);
    }
    else if(guess>random_num){
        printf("The number u guessed is high\n");
        printf("Number of guess remaining: %d\n",chances);
    }
    else{
        printf("The number u guessed is correct\n");
        exit(0);
    }
    
    }
    printf("U made enough number of guess!\n\nThe correct number was %d\n",random_num);
    return 0;
}
    
    
   
    