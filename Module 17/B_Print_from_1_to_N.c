#include<stdio.h>

void print_n(int n, int i)
{
    if(i == n+1)
    {
        return;
    }
    printf("%d\n", i);
    print_n(n, i+1);
}


int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    print_n(n, i);

    return 0;
}