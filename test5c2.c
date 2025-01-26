#include<stdio.h>
void main(){

    // check no. is even or odd without using %

    int n;
    printf("enter value of n ");
    scanf("%d", &n);

    if(n & 1){
        printf("n is odd");
    }

    else{
        printf("n is even");
    }

}