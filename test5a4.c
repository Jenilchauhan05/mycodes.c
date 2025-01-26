#include<stdio.h>
void main(){

    // no. is odd or even

    int n;
    printf("enter value of n ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("n is even");
    }

    else{
        printf("n is odd");
    }
    
}