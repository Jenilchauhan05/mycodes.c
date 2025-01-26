#include<stdio.h>
#include<math.h>
void main(){

    //determine the roots of the eqn :

    float a, b, c, d, root1, root2, real, imaginary;

    printf("enter value of a, b and c ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0){
        root1 = (-b + sqrt(d)) / 2*a;
        root2 = (-b - sqrt(d)) / 2*a;
        printf("roots are real and different. \n");
        printf("root1 = %.2f\n", root1);
        printf("root2 = %.2f\n", root2);
    }

    else if (d == 0){
        root1 = root2 = -b / 2*a;
        printf("roots are real and equal. \n");
        printf("roots = %.2f\n", root1);
    }

    else if (d < 0){
        real = -b / 2*a;
        imaginary = sqrt(-d) / 2*a;
        printf("roots are complex and different. \n");
        printf("real = %.2f\n", real);
        printf("imaginary = %.2f\n", imaginary);
    }

}