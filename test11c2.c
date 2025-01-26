#include<stdio.h>
void main(){
    
    // Calculate x^y without using power function and multiplication by for loop
    
    int x, y, i, j, pow = 1, result = 0;
    printf("enter value of x and y ");
    scanf("%d %d", &x, &y);
    
    for (i = 0; i < y; i++) {
        result = 0;
        
        for (j = 0; j < x; j++) {
            result += pow;
        }
        
        pow = result;
        
    }
    
    printf("x^y is %d\n", pow);
    
}