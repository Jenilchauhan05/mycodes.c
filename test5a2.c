#include<stdio.h>
void main(){
    
    // swap 2 numbers

    int a, b, temp = 0;
    printf("enter value of a and b");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);

}