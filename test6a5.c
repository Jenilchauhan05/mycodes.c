#include<stdio.h>
void main(){

    //Read marks of ƒve subjects. Calculate percentage and print class accordingly

    int marks;

    printf("enter your marks ");
    scanf("%d", &marks);

    if(marks >= 70 && marks <=100){
        printf("distinctions");
    }

    else if(marks <= 70 && marks >= 61){
        printf("first class");
    }

    else if(marks <= 60 && marks >= 46){
        printf("secod class");
    }

    else if(marks <= 45 && marks >= 36){
        printf("pass");
    }

    else if(marks <= 35){
        printf("fail");
    }

}