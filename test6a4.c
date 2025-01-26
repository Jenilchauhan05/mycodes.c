#include<stdio.h>
void main(){

    //check the last no. of digit is even or odd

    int n, remainder;

    printf("enter value of n ");
    scanf("%d", &n);

    remainder = n % 10;

    if(remainder % 2 == 0){
        printf("n is even");
    }

    else{
        printf("n is odd");
    }

}