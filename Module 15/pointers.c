#include<stdio.h>
int main()
{
    int x = 20;
    int y = 30;
    printf("%p\n", &x);

    int * ptr;
    ptr = &x;
    *ptr = 200;
    printf("%d\n", x);
    
    
    return 0;
}