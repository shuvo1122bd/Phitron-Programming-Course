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

    int arr[105] = {0};


    for(int i = 0; i < n; i++)
    {
       if(a[i] > a[i+1])
       {
        arr[i];
       }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}