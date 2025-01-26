#include<stdio.h>
void main(){
    
    // Print ƒrst 50 numbers in series 1, 4, 7, 10…
    
    int i = 1, count = 1;
    
    while (count < 51) {
        
        printf("%d ", i);
        i += 3;
        count++;
    }
    
}