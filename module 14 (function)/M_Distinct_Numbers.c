#include <stdio.h>

int distinct(int ar[], int n)
{
    int cnt = 0;
    
    for (int i = 0; i < n ; i++)
    {
        int flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] == ar[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cnt++;
        }
        
    }
    printf("%d", cnt);
}

int main()
{
     int n; // number of array
    scanf("%d", &n);
    int ar[n]; // array of numbers
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    distinct(ar, n);
    return 0;
}