/*ORGINAL
 *Name: guess.c
 *Purpose: guess the number in specified chances
 *Author: Amy
 *Date: 2024.7.9
*/

/*DEVELOPING*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<windows.system.h>

int main() {
    const int default_chance_time = 7;
    int hardness_level = 0, reward_num = -1,
        usr_guess = -1, chance = default_chance_time;
    bool is_guess_right = false;

    for(;;) {
        printf("\t\t\thardness\n"
            "1:one-digit\n2:two-digit\n3:three-digit\n4:exit"
            "\n(Type number option to choose ...)\n");
        scanf("%d", &hardness_level);
        /*Must input number here
        + program crupt otherwise*/
        srand(time(NULL));
        switch(hardness_level) {
        default:
            printf("Error code, default code actived\n");
            /*default code is 1*/
            /*Fall through*/
        case 1:
            printf("hardness: 1 [0,9]\n");
            reward_num = rand() % 10;
            break;
        case 2:
            printf("hardess: 2 [10,99]\n");
            reward_num = 10 + rand() % 90;
            break;
        case 3:
            printf("hardness: 3 [100,999]\n");
            reward_num = 100 + rand() % 900;
            break;
        case 4:
            return 0;
        }
        do {
            printf("[chance left:%d]\tyour guess:\n", chance);
            scanf("%d", &usr_guess);        
            chance --;
            if (usr_guess == reward_num) {
                is_guess_right = true;
                printf("bingo!\n");
                break;
            }
            else if ( reward_num > usr_guess)
                    printf("> %d\n", usr_guess);
                else
                    printf("< %d\n", usr_guess);
        } while (chance > 0);
        if (is_guess_right == false)
        printf("losed...\n");
        hardness_level = 0; usr_guess = -1;
        reward_num = -1; chance = default_chance_time;
        is_guess_right = false;
        printf("Ready to back the menu...\n");
        system("pause");
    }
    

    return 0;
}