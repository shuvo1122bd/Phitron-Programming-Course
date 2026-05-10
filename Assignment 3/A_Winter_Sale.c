#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d %d", &x, &p);

    int remaining_percent = 100 - x;

    float calcu = p * 100;

    float original_price = calcu / remaining_percent;

    printf("%.2f", original_price);
    return 0;
}