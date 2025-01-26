// Find length of string using pointers.

#include<stdio.h>
void main(){
    
    char str[100];
    char *ptr;
    int length = 0;
    
    printf("enter a string ");
    gets(str);
    
    ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    
    printf("length of the string is %d\n", length);
}