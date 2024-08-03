/*
* Purpose: test scanf whether add /000 to array
*+ after reading stream with the %[^] format
* 
* Date: 26/7/2024
*/
#include<stdio.h>

int main(void) {
    char array[3] = {'1', '2', '3'};
    char* pointer = array + 3;//the location after array in the stack

    scanf("%[^-]", array);

    return 0;
}