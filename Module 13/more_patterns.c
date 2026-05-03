#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = n+2;
    int space = 0;

    for(int i = 1; i <= n;i++) //printing new lines
    {
        for(int j = 1; j <= space; j++) //printing space
        {
            printf(" ");
        }
        for(int  j = 1; j <= star; j++) //printing stars
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}