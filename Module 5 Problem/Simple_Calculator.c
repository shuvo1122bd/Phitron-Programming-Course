#include<stdio.h>
int main()
{
    long long int x, y;
    scanf("%lld %lld", &x, &y);

    long long int sum = x + y;
    printf("%lld + %lld = %lld\n", x,y, sum);

    long long int multi = x * y;
    printf("%lld * %lld = %lld\n", x,y, multi);

    long long int subs = x - y;
    printf("%lld - %lld = %lld", x,y, subs);


    return 0;
}