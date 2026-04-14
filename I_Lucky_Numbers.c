#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int firstDigit = n / 10;
    int lastDigit = n % 10;

    if (lastDigit % firstDigit == 0 || firstDigit % lastDigit == 0)
    {
        printf("YES");
    } else 
    {
        printf("NO");
    }  
    return 0;
}