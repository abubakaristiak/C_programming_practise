// Manual process
// #include<stdio.h>
// int main()
// {
//     int a=10, b=20;
//     int sum = a+b;
//     printf("The summation is: %d",sum);
//     return 0;
// }


// user input two numbers and sum 
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int sum = a+b;
    printf("The summation is: %d", sum);
    return 0;
}