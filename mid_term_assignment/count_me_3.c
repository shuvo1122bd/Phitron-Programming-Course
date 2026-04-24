#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);


    
    for(int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s", &s);
        int length_s =strlen(s);
        
        int count_capital = 0;
        int count_small = 0;
        int count_digit = 0;

        for(int i = 0; i < length_s;i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                count_capital++;
            }
            else if(s[i] >= 97 && s[i] <= 122)
            {
                count_small++;
            }
            else{
                count_digit++;
            }
            
        }

        printf("%d %d %d\n", count_capital, count_small, count_digit);
    }
    
    return 0;
}