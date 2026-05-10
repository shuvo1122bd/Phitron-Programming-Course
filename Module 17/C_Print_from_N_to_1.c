#include<stdio.h>

void print_n(int n, int i)
{
    if(i == n+1)
    {
        return;
    }
    print_n(n, i+1);
    if (i == 1)
    {
        printf("%d", i);
    } else{
        printf("%d ", i);
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    print_n(n, i);

    return 0;
}