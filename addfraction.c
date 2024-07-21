/*
 *Purpose: add fraction input with the "x/y" format and simplify it
 *Date: 7.19.2024
*/

#include<stdio.h>

int main (void) {
    int num1, denom1, num2, denom2,
        result_num, result_denom,
        num_backup, denom_backup,
        tmp, gcd, smplfd_num, smplfd_denom;

    printf("Enter the first fraction: ");
    scanf("%d /%d", &num1, &denom1);
    printf("Enter the second fraction: ");
    scanf("%d /%d", &num2, &denom2);

    num_backup = result_num = num1 * denom2 + num2 * denom1;
    denom_backup = result_denom = denom1 * denom2;

    while(num_backup != 0) {    //get gcd iteratively
        tmp = num_backup;
        num_backup = denom_backup % num_backup;
        denom_backup = tmp;
    }
    gcd = denom_backup;
    smplfd_denom = result_denom / gcd;
    smplfd_num = result_num / gcd;
    printf("The sum is %d/%d\n simplified is %d/%d\n",
      result_num, result_denom, smplfd_num, smplfd_denom);

    return 0;
}