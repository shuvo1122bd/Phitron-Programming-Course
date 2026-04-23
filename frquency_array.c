#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[6] ={0};

    for(int i = 0; i < n; i++)
    {
        if(a[i] == i)
        {
            fre[i]++;
        }
    }
    printf("%d\n", fre[3]);
    return 0;
}