#include <stdio.h>
void main(){

    // Take two numbers input from user and perform a multiplication without using * operator.

    int a, b, mult = 0, i = 1;

    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);

    while (i <= b) {
        mult += a;
         i++;
    }

    printf("multiplication is %d\n", mult);
    
}