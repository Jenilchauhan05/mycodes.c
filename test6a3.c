#include<stdio.h>
void main(){

    // check the enteres character in upper-lower case, digit or any special character

    char ch;

    printf("enter value of character ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("ch is in upper case");
    }

    else if(ch >= 'a' && ch <= 'z'){
        printf("ch is in lower case");
    }

    else if(ch >= '0' && ch <= '9'){
        printf("ch is digit");
    }

    else{
        printf("ch is a special character");
    }

}
