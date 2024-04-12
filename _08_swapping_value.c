#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a: \n");
    scanf("%d", &a);
    printf("Enter value of b: \n");
    scanf("%d", &b);

    int temp = a;
    a = b;
    b = temp;
    
    printf("\nAfter Swapping: a=%d, b=%d", a,b);
    return 0;
}