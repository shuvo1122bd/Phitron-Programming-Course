#include<stdio.h>
int main()
{
    int ar[5];
    for(int i = 0; i < 5; i++) //input
    {
        scanf("%d", &ar[i]);
    }
    for(int i = 0; i < 5; i++) //output
    {
        printf("%d ", ar[i]);
    }

    return 0;
}