#include<stdio.h>

/*
 *Purpose: Stating student's info,
 *         print it with different format strings
 *Date: 2024.7.17
 */

/*
 *Xiaoming WANG   M
 *01-01-2000      Sat.
 *100     85      90
 *93.5    10%
*/
int main(void) {
    char first_name[] = "Xiaoming",
      last_name[] = "WANG", gender = 'M',
      weekday[] = "Saturday";
    
    int birth_day = 1, birth_month = 1,
      birth_year = 2000,
      C_oj = 100, C_midexam = 85, C_finalexam = 90,
      rank = 10;

    float score = 93.5;
    
    printf("%s %s\t%c\n", first_name, last_name, gender);
    printf("%.2d-%.2d-%d\t%.3s.\n", birth_day, birth_month, birth_year, weekday);
    printf("%d\t%d\t%d\t\n", C_oj, C_midexam, C_finalexam);
    printf("%.1f\t%d%%\n", score, rank);

    return 0;
}