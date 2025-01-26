#include<stdio.h>
void main(){

    // perform addition, subtraction, multiplication and division as user choice

    char choice, a, s, m, d;
    int x, y, result = 0;

    printf("enter your choice ");
    scanf(" %c", &choice);

    printf("enter value of x and y ");
    scanf("%d %d", &x, &y);

    if(choice == 'a'){
        result = x + y;
        printf("sum is %d", result);
    }

    else if(choice == 's'){
        result = x - y;
        printf("subtraction is %d", result);
    }

    else if(choice == 'm'){
        result = x * y;
        printf("multiplication is %d", result);
    }

    else if(choice == 'd'){
        result = x / y;
        printf("division is %d", result);
    }

}