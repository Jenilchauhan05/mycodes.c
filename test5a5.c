#include<stdio.h>
void main(){

    // largest no. from 3 no. using ternory operators

    int a, b, c, largest;
    printf("enter value of a, b and c ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);

    printf("%d is largest", largest);

}