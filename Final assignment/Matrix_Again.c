#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int last_row = n-1; //last Row
    
    for(int i = 0; i < m; i++)
        {
            printf("%d ", a[last_row][i]);
        }

    printf("\n");

    int last_column = m-1; //last column
    
    for(int j = 0; j < n; j++)
        {
            printf("%d ", a[j][last_column]);
        }
    return 0;
}