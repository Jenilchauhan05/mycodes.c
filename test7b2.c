#include<stdio.h>
void main(){
    
    // Check whether character is an alphabet or not using conditional operator.
    
    char ch;
    
    printf("enter the character ");
    scanf(" %c", &ch);
    
    (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') ? 
    printf("ch is an alphabet\n") :
    printf("ch is not an alphabet\n");
    
}