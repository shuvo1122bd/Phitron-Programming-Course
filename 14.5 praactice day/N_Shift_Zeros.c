#include<stdio.h>

void shitft_zero( int ar[], int n)
{    
    for(int i = 0; i < n; i++)
    {
        if(ar[i] != 0)
        {
            printf("%d ", ar[i]);
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        if(ar[i] == 0)
        {
            printf("%d ", ar[i]);
        }
        
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    shitft_zero(ar, n);
    
    return 0;
}