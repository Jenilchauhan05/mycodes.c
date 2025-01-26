//  Calculate the average, geometric and harmonic mean of n elements in an array.

#include<stdio.h>
#include<math.h>
int main(){
    
    int n, i;
    float sum = 0.0, product = 1.0, harmonic_sum = 0.0;
    float avg, geometric_mean, harmonic_mean;
    
    printf("enter number of elements in array ");
    scanf("%d", &n);
    
    float arr[n];
    printf("enter %d elements in array\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
        product *= arr[i];
        harmonic_sum += 1 / arr[i];
    }
    
    avg = sum / n;
    geometric_mean = pow(product, 1.0/n);
    harmonic_mean = n / harmonic_sum;
    
    printf("average : %.2f\n", avg);
    printf("geometric mean : %.2f\n", geometric_mean);
    printf("harmonic mean : %.2f\n", harmonic_mean);
    
    return 0;
    
}