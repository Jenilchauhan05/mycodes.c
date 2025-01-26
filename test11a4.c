#include<stdio.h>
void main(){
    
    // Calculate x^y without using power function by for loop
    
    int x, y, i, pow = 1;
    
    printf("enter value of x and y ");
    scanf("%d %d", &x, &y);
    
    for (i = 1; i <= y; i++) {
        
        pow *= x;
        
    }
    
    printf("%d ^ %d is %d\n", x, y, pow);
    
}