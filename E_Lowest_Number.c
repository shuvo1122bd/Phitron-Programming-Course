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

    int lowest_number = a[0];
    int position = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < lowest_number)
        {
            lowest_number = a[i];
            position = i + 1;
        }
        else if(i == 0 && a[i] == lowest_number) // if index number == 0; that is solution;
        {
            position = i + 1;
        }
        
    }

    printf("%d %d", lowest_number, position);
    return 0;
}