#include<stdio.h>
void main(){
    
    // find hcf and lcm of 2 numbers
    
    int n1, n2, a, b, remainder, hcf, lcm;
    
    printf("enter value of n1 and n2 ");
    scanf("%d %d", &n1, &n2);
    
    a = n1;
    b = n2;
    
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    
    hcf = a;
    
    lcm = (n1 * n2) / hcf;
    
    printf("hcf is %d and lcm is %d\n", hcf, lcm);
    
}