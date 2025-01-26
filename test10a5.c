#include<stdio.h>
void main(){
    
    // print given digit in reverse order
    
    int n, i = 1, reverse;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (n > 0) {
        reverse = n % 10;
        n /= 10;
        printf("%d ", reverse);
    }
    
}