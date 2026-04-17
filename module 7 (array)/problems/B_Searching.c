#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); //input N

    long long int ar[n]; //input array with loop
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    long long int x; //input X 
    scanf("%lld", &x);

    int u = 0; //input i from loop
    int value = 0; //input i value = ar[i] from loop

    for (int i = 0; i < n; i++)
    {

        if (ar[i] == x)
        {
            u = i;
            value = ar[i];
            break;
        }
    }

    if (value == x) // value = ar[i] that should be equal to x
    {
        printf("%d", u);
    }
    else
    {
        printf("-1"); //if no condition will be met.
    }

    return 0;
}