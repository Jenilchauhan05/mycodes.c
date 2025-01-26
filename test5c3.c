#include<stdio.h>
void main(){

    // divide no. without using / ;

    int n, divide;
    printf("enter value of n ");
    scanf("%d", &n);

    divide = n >> 1;

    printf("n divide by 2 is %d", divide);
    
}