#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n-2;
    int num = 1;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= space; j++)
        {
            printf(" ");
        }
        for(int j = num; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        space--;
        num++;
    }
    return 0;
}