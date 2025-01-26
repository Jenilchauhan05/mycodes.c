#include<stdio.h>
void main(){

    // find second largest no. of 3 inputs

    int a, b, c;

    printf("enter value of a, b and c ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b)){
        printf("%d is secod largest no", a);
    }

    else if ((b > a && b < c) || (b > c && b < a)){
        printf("%d is second largest no", b);
    }

    else{
        printf("%d is second largest no", c);
    }

}