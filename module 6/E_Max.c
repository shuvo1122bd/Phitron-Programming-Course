#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int z = 0;
    
    for (int i = 1; i <= n; i++){
        scanf("%d", &x);
        if (x > z){
            z = x;
        }
    }
    printf("%d", z);
    return 0;
}