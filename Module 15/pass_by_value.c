#include <stdio.h>

int pass(int x)
{
    x = 20;
    // this x is different from main function x variable.
    // memory address is also different
    printf("%d\n", x);
    printf("%p\n", &x);
}

int main()
{
    int x = 10;
    pass(x);
    printf("%d\n", x);
    printf("%p\n", &x);
    return 0;
}