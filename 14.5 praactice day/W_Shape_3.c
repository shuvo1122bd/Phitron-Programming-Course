#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int space = n-1;
    int star = 1;

    for(int i = 0; i < n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
    }

    int space2 = 0;
    int star2 = (n*2)-1;

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < space2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star2; j++)
        {
            printf("*");
        }
        printf("\n");
        space2++;
        star2-=2;
    }
    return 0;
}