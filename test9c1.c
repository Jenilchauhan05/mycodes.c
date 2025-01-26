#include<stdio.h>
void main(){
    
    // convert no. in words
    
    int n, remainder, divisor = 1, temp;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    temp = n;
    
    while (temp >= 10) {
        divisor *= 10;
        temp /= 10;
    }
    
    while (divisor > 0) {
        remainder = n / divisor;
        n %= divisor;
        divisor /= 10;
        
        switch (remainder) {
         
        case 0 : printf("zero "); break;    
        case 1 : printf("one "); break;
        case 2 : printf("two "); break;
        case 3 : printf("three "); break;
        case 4 : printf("four "); break;
        case 5 : printf("five "); break;
        case 6 : printf("six "); break;
        case 7 : printf("seven "); break;
        case 8 : printf("eight "); break;
        case 9 : printf("nine "); break;
        
    }
    
}

}