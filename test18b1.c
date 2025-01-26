// Generate Fibonacci series of N given number using function name ƒibbo().

#include<stdio.h>
void fibbo(int n) {
    
    int a = 0, b = 1, next, i;
    printf("fibbonaci series : \n");
    
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}

void main(){
    
    int n;
    printf("enter the n ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("enter a positive n \n");
    }
    
    else {
        fibbo(n);
    }
}