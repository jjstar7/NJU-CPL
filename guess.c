/*
 *Name: guess.c
 *Purpose: guess the number in specified chances
 *Author: Amy
 *Date: 2024.7.9
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //1.generate a random number under the limitation
    srand(time(NULL)); //use current time as seed for random generator
    int answer = rand() % 100;
    int chance = 7;
    printf("Random answer on [0,100]: %d\n",answer);

    //2.read the input from the keyboard
    int guess;
    int is_right = 0;
    
    do {
        printf("[%d]Please input your guess:\n", chance);
        scanf("%d", &guess);        
        chance --;
        //3.compare the guess with the answer, giving related prompt arrcoding to the comparing result
        if (guess == answer) {
            is_right = 1;
            printf("Great! You hit the correct number!\n");
            break;
        }
        else if (answer > guess)
                printf("Bigger than this.\n");
            else
                printf("Smaller than this.\n");
        } while (chance > 0);

    //4.repeate procedure 2 and 3 until hit the answer or the chances
    if (is_right == 0)
        printf("Sorry, you lose the game this time!\n");

    int window_holder;

    printf("Press any key to end!\n");
    window_holder = scanf("%d", &window_holder);
    
    return 0;
}