#include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if (a > 5)
//     {
//         printf("hi");
//     } else if (a > 3){
//         printf("bye");
//     }
//     return 0;
// }

// int main()
// {
//     int x = 10;
//     int y = 12;
//     if (x >= y || x <= y)
//     {
//         printf("hi ");
//     }
//         printf("hello");
//     return 0;
// }

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a%2 == 0){
        printf ("%d is = Even number\n", a);
    } else{
        printf("%d is = ODD number\n", a);
    } 
    if (b%2 == 0){
        printf("%d is = Even number\n", b);
    } else {
        printf("%d is = ODD number\n", b);
    }  
    return 0;
}
