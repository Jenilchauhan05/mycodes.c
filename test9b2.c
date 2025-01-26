#include<stdio.h>
void main(){
    
    // Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5,
    // IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000
    
    int n;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (n != 0) {
        
        if (n >= 1000){
            n -= 1000;
            printf("M");
        }
        
        else if (n < 1000 && n >= 900) {
            n -= 900;
            printf("CM");
        }
        
        else if (n < 900 && n >= 500) {
            n -= 500;
            printf("D");
        }
        
        else if (n < 500 && n >= 400) {
            n -= 400;
            printf("CD");
        }
        
        else if (n < 400 && n >= 100) {
            n -= 100;
            printf("C");
        }
        
        else if (n < 100 && n >= 90) {
            n -= 90;
            printf("XC");
        }
        
        else if (n < 90 && n >= 50) {
            n -= 50;
            printf("L");
        }
        
        else if (n < 50 && n >= 40) {
            n -= 40;
            printf("XL");
        }
        
        else if (n < 40 && n >= 10) {
            n -= 10;
            printf("X");
        }
        
        else if (n < 10 && n >= 9) {
            n -= 9;
            printf("IX");
        }
        
        else if (n < 9 && n >= 5) {
            n -= 5;
            printf("V");
        }
        
        else if (n < 5 && n >= 4) {
            n -= 4;
            printf("IV");
        }
        
        else if (n < 4 && n >= 1) {
            n -= 1;
            printf("I");
        }
        
    }
    
}