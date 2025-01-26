#include<stdio.h>
void main(){
    
    // Print numbers between two given numbers which is divisible by 2.
    
    int a, b, temp;
    
    printf("enter value of a and b ");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a % 2 != 0) {
        a++;
    }
    
    while (a <= b) {
        printf("%d ", a);
        a += 2;
    }
    
    }
    
