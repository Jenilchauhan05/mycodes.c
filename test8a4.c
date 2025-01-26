#include <stdio.h>
void main(){

    // print sum of 1 to n no.

    int n, i = 1, sum = 0;

    printf("enter value of n ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    printf("sum is %d\n", sum);
    
}