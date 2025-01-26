//  Find all prime numbers between given interval using functions.

#include<stdio.h>
int isprime(int n) {
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
    
}

void isininterval(int start, int end) {
    
    printf("prime numbers between %d and %d are :\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isprime(i)) {
            printf("%d ", i);
        }
    }
}

void main(){
    
    int start, end;
    printf("enter the value of start and end ");
    scanf("%d %d", &start, &end);
    
    isininterval(start, end);
    
}