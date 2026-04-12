#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int check = x / 1000;
    if (check % 2 == 0){
        printf("EVEN");
    }  else {
        printf("ODD");
    }
    
    
    return 0;

}