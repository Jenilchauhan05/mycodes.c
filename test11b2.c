#include<stdio.h>
void main(){
    
    // Count frequency of digits in an integer
    
    int n, digit, i;
    int frequency[10] = {0};
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (n > 0) {
        digit = n % 10;
        frequency[digit]++;
        n /= 10;
    }
    
    printf("digit frequency : \n");
    for (i = 0; i < 10; i++) {
        
        if (frequency[i] > 0) {
            printf(" %d : %d,", i, frequency[i]);
        }
        
    }
    
}