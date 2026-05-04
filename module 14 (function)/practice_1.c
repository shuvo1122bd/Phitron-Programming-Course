#include<stdio.h>
#include<stdbool.h>
int check()
{
    int n;
    scanf("%d", &n);
    int odd_even = false;
    if( n % 2 == 0)
    {
        odd_even = true;
    }

    if(odd_even == true)
    {
        printf("Even");
    }else{
        printf("Odd");
    }
}


int main()
{
    
    check();
    
    return 0;
}