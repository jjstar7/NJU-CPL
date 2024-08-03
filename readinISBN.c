#include<stdio.h>

int main(void) {
    char check_digit;
    int gsi;
    char group_id[7] = " ", pub_code[7] = " ",
        item_num[7] = " ";
    
    printf("Enter ISBN (*-*-*-*-*): ");
    scanf("%d-%[^-]-%[^-]-%[^-]-%c",
        &gsi, group_id, pub_code, item_num, &check_digit);
    
    printf("GSI prefix: %d\nGroup identifier: %s\n", gsi, group_id);
    printf("Publisher code: %s\nItem number: %s\n", pub_code, item_num);
    printf("Check number: %c\n", check_digit);

    return 0;
}