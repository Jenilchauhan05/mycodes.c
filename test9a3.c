#include<stdio.h>
void main(){
    
    //  Calculate x^y without using power function
    
    int x, y, i = 1, pow = 1;
    
    printf("enter value of x and y ");
    scanf("%d %d", &x, &y);
    
    while (i <= y) {
        pow = pow * x;
        i++;
    }
    
    printf("x ^ y is %d\n", pow);
    
}