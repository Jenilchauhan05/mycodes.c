#include<stdio.h>
void main(){

    // basic salary of an employee and calculate Gross salary according to given conditions

    int bs; 
    float gs, hra, da;

    printf("enter your basic salary ");
    scanf("%d", &bs);

    if(bs >= 30000){
        hra = 0.3 * bs;
        da = 0.95 * bs;
        gs = bs + hra + da;
        printf("gross salary is %f", gs);
    }

    else if(bs <= 30000 && bs >=20000){
    hra = 0.25 * bs;
    da = 0.9 * bs;
    gs = bs + hra + da;
     printf("gross salary is %f", gs);
    }

    else if(bs <= 20000 && bs >=10000){
    hra = 0.2 * bs;
    da = 0.8 * bs;
    gs = bs + hra + da;
     printf("gross salary is %f", gs);
    }
    
}