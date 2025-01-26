#include<stdio.h>
#include<math.h>
void main(){

    // Convert RGB color to CMYK as per formula:

    int red, green, blue;
    float white, yellow, black, cyan, magenta;

    printf("enter values for red, gree and blue (0-255) : ");
    scanf("%d %d %d", &red, &green, &blue);

    if (red == 0 && green == 0 && blue == 0){
        yellow = 0;
        cyan = 0;
        magenta = 0;
        black = 1;

        printf("CMYK Values:\n");
        printf("Cyan: %.2f\n", cyan);
        printf("Magenta: %.2f\n", magenta);
        printf("Yellow: %.2f\n", yellow);
        printf("Black: %.2f\n", black);
    }

    else {
        float r = red / 255.0;
        float g = green / 255.0;
        float b = blue / 255.0;

        white = fmaxf(r, fmaxf(g, b));

        cyan = (white - r) / white;
        magenta = (white - g) / white;
        yellow = (white - b) / white;
        black = 1 - white;

        printf("cmyk values : \n");
        printf("cyan : %.2f\n", cyan);
        printf("magenta : %.2f\n", magenta);
        printf("yellow : %.2f\n", yellow);
        printf("black : %.2f\n", black);
    }

}