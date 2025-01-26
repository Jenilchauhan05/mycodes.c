#include<stdio.h>
void main(){

    //Input electricity unit charge and calculate the total electricity bill according to the given conditions
 
    float bill, final_bill, unit;

    printf("enter value of unit ");
    scanf("%f", &unit);

    if(unit <= 50){
        bill = 0.5 * unit;
        final_bill = bill + 0.2 * bill;
        printf("final bill is %f", final_bill);
    }

    else if(unit <= 150 && unit > 50){
        bill = 0.5*50 + (unit - 50) * 0.75;
        final_bill = bill + 0.2 * bill;
        printf("final bill is %f", final_bill);
    }

    else if(unit <= 250 && unit > 150){
        bill = 0.5*50 + 0.75*100 + (unit - 150) * 1.2;
        final_bill = bill + 0.2 * bill;
        printf("final bill is %f", final_bill); 
    }

    else if(unit > 250){
        bill = 0.5*50 + 0.75*100 + 1.2*100 + (unit - 250) * 1.5;
        final_bill = bill + 0.2 * bill;
        printf("final bill is %f", final_bill); 
    }

}