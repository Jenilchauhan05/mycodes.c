#include<stdio.h>
void main(){
    
    //  Find whether the given number is prime or not using flag.
    
    int n, i = 2, flag = 1;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    if (n <= 1) {
        flag = 0;
    }
    
    else {
        
        while (i <= n / 2) {
            
            if (n % i == 0) {
                flag = 0;
                break;
            }
            
            i++;
            
        }
        
    }
    
    if (flag == 1) {
        printf("n is prime number\n");
    }
    
    else {
        printf("n is not prime ");
    }
    
}