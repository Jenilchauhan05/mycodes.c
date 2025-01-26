#include<stdio.h>
void main(){

    //fahrenheit to celsius

    float c, f;
    printf("enter value of f");
    scanf("%f", &f);

    c = (((f-32)*5)/9);

    printf("temp is : %f", c);
    
}
