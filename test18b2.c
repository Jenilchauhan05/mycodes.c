// Check whether a number is prime, Armstrong or perfect number using functions. (create custom library)

#ifndef MYLIBRARY_H
#define MYLIBRARY_H

int isPrime(int n);
int isArmstrong(int n);
int isPerfect(int n);

#endif

#include <stdio.h>
#include <math.h>
#include "myLibrary.h"

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits); 
        temp /= 10;
    }

    return (sum == n);
}

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n);
}

#include <stdio.h>
#include "myLibrary.h"

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    if (isPerfect(n)) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}

