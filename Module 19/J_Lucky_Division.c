#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int flag = 0;
    int temp = n;
    for (int i = 0; temp != 0; i++)
    {
        int mod = temp % 10;
        if (mod != 4 && mod != 7)
        {
            flag++;
        }
        temp = temp / 10;
    }

    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n%44 ==0 || n%74 == 0 || n%77 == 0 || n % 444 == 0|| n%447 == 0|| n%474 == 0 || n%477 == 0 || n%744 == 0 || n%747 == 0 || n% 774 == 0 || n%777 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}