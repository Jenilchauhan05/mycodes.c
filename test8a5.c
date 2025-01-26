#include<stdio.h>
void main(){
    
    // Get 10 numbers from user print count of odd, even numbers.

    int i = 0, even = 0, odd = 0, num;
    
    printf("enter 10 numbers\n");
    
    while ( i < 10 ){
    scanf("%d", &num);
        
        if(num % 2 == 0){
            even++;
        }
        
        else {
            odd++;
        }
        
        i++;
        
    }
        
        printf("even no : %d\n", even);
        printf("odd no : %d\n", odd);
        
    }
    
