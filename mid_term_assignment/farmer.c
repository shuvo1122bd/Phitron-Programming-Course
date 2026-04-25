#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int with_additional_farmer = m1+m2; //total farmer with additional farmer
        int total_days = m1*d/with_additional_farmer;

        int fewer_days = d - total_days;

        printf("%d\n", fewer_days);
    }
    return 0;
}