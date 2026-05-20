#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    //year
    int year = n / 365;
    printf("%d years\n", year);

    int total_days =365 * year;
    int days_for_month = n - total_days;
    int month = days_for_month / 30;
    printf("%d months\n",month);

    int total2days = 30 * month;
    int days = n - (total_days + total2days);
    printf("%d days", days);
    return 0;
}