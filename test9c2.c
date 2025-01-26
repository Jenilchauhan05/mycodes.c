#include<stdio.h>
void main(){
    
    // convert decimal to binary
    
    int n, bin = 0, place = 1, remainder;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (n > 0) {
        remainder = n % 2;
        bin = bin + remainder * place;
        n /= 2;
        place *= 10;
    }
    
    printf("binary is %d\n", bin);
    
}