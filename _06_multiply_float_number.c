#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter two float number: ");
    scanf("%f %f", &num1, &num2);
    float mul = num1 * num2;
    printf("%.3f", mul);
    return 0;
}


// #include<stdio.h>
// float multiply(float a, float b){
//     return a*b;
// }
// int main()
// {
//     float A= 3.88, B = 3.55, product;
//     product = multiply(A, B);
//     printf("Product of entered number is: %.3f", product);
    
//     return 0;
// }
