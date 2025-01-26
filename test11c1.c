#include<stdio.h>
void main(){
    
    // Swap ƒirst and last digits of a number
    
    int n, first, last, middle, pow = 1, swapped_n, temp, i;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    temp = n;
    
    last = n % 10;
    
    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
    }
    
    first = temp;
    
    middle = n % pow;
    middle /= 10;
    
    swapped_n = last*pow + middle*10 + first;
    
    printf("after swapping first and last digit of n is %d\n", swapped_n);
    
}