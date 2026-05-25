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

        int b[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        int i = 0;
        int j = n-1;
        while(i < j)
        {
            int temp = b[i];
            b[i] = b[j];
            b[j] = temp;
            i++;
            j--;
        }

         for(int i = 0; i < n; i++)
        {
            int sum = a[i] + b[i];
            printf("%d ", sum);
        }
        return 0;
    }