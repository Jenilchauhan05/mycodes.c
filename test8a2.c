#include<stdio.h>
void main(){
    
    // print odd no btwn 1 to n using while loop
    
    int n, i = 1;
    
    printf("enter value of n ");
    scanf("%d", &n);
    
    while (i <= n) {
        
    if (i % 2 == 1) {
        printf("%d ", i );
    }
    
    i++;
    
    }
    
}