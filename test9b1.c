#include<stdio.h>
void main(){
    
    // Print all uppercase and lowercase alphabets.
    
    char upp = 'a', low = 'A';
    
    while (upp <= 'z') {
        printf("uppercase is %c\n", upp);
        upp++;
    }
    
    while (low <= 'Z') {
        printf("lowercase is %c\n", low);
        low++;
    }
    
}