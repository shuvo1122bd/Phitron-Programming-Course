#include <stdio.h>
int main()
{
    char lwCase;
    scanf("%c", &lwCase);
    if (lwCase == 'z'){
        printf("a");
    }
     else if (lwCase >= 'a')
    {
        int cv = lwCase + 1;
        printf("%c", cv);
    }

    return 0;
}