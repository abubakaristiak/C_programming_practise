// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if ((a > b) && (a > c))
//     {
//         printf("%d is largest number", a);
//     }
//     else if ((b > c) && (b > a))
//     {
//         printf("%d is largest number", b);
//     }
//     else
//     {
//         printf("%d is largest number", c);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    for(int i=1; i<=t; i++){
        int x, y, a;
        scanf("%d %d %d", &x, &y, &a);
        if (a>=x && a<=y)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
    return 0;
}