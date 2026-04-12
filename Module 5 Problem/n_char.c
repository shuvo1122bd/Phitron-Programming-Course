#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 65 && x <= 90){
        int upperCase = x + 32 ;
        printf("%c", upperCase);
    }
    else 
    {
        int lowerCase = x - 32;
        printf ("%c", lowerCase);
    }
    return 0;
}