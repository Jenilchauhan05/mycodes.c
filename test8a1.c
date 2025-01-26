#include <stdio.h>
void main(){

    // print 1 to n using while :

    int i = 1, n;
    
    printf("enter value of n ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d", i++);
    }
    
}