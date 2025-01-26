#include<stdio.h>
void main(){

    //WAP to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.

    int a, b, c;

    printf("enter value of a, b and c ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a){

    if (a == b && b == c){
        printf("triangle is equilateral");
    }

    else if (a == b || b == c || a == c){
        printf("triangle is isosceles");
    }

    else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        printf("triangle is right angled");
    }

    else{
        printf("triangle is scalen");
    }
    }

    else{
        printf("sides do not valid for a triangle");
    }
    
}