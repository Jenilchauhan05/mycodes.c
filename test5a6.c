#include<stdio.h>
void main(){

    // if char is vowel or consonant

    char ch;
    printf("enter value of character ");
    scanf(" %c", &ch);

    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("char is vowel");
    }

    else{
        printf("char is consonant");
    }

}