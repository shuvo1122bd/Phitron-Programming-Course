#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for(int i = 0; i<n;i++)
    {
        scanf("%d" , &ar[i]);
    }

    int i = 0;
    int j = n-1;
    int flag = 0;

    for(int i = 0; i < n; i++, j--)
    {
        if(ar[i] != ar[j])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}