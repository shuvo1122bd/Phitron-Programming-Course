#include<stdio.h>
int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60};
    
    *a = 200;
    *(a+1) = 400;
    *(a+2) = 600;


    for(int i = 0; i < 6 ;i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}