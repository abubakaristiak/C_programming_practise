// // method 01 by using printf
// #include<stdio.h>
// int main()
// {
//     printf("Abu Bakar Istiak");
//     return 0;
// }


// method 02 by using scanf
// #include<stdio.h>
// int main()
// {
//     char name[20];
//     printf("Enter your name: ");
//     scanf("%s", &name);

//     printf("Your name is : %s.", name);
//     return 0;
// }

// with space
#include <stdio.h>

int main() {
    char name[50]; 
    printf("Enter your name: ");
    scanf(" %[^\n]", name); // Note the space before %[^\n], it's important

    printf("Your name is: %s.", name);
    return 0;
}
