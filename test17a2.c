// Demonstrate int, float, double and char pointer.

#include<stdio.h>
void main(){
    
    int a = 7;
    float b = 0.7;
    double c = 0.647456;
    char ch = 'j';
    
    printf("value of a is %d\n", a);
    printf("value of b is %f\n", b);
    printf("value of c is %lf\n", c);
    printf("value of ch is %c\n", ch);
    
    printf("address of a is %p\n", &a);
    printf("address of b is %p\n", &b);
    printf("address of c is %p\n", &c);
    printf("address of ch is %p\n", &ch);
}