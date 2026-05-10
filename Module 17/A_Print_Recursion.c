#include<stdio.h>

void print_n(int n, int i)
{
    if(i == n)
    {
        return;
    }
    printf("I love Recursion\n");
    print_n(n, i+1);
}


int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    print_n(n, i);

    return 0;
}