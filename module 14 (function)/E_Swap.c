#include <stdio.h>

void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("%d %d", num1, num2);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(x, y);

    return 0;
}