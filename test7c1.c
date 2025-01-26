#include <stdio.h>
void main(){

    // Check for equality of two numbers without using arithmetic or comparison operator.

    int a, b;
    printf("enter values of a and b ");
    scanf("%d %d", &a, &b);

    if ((a ^ b) == 0) {
        printf("no. are equal\n");
    }

    else{
        printf("no. are different\n");
    }
    
}