#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
    long long int M;
    scanf("%lld", &M);
    int A, B, C;
    scanf("%d %d %d",&A, &B, &C);

    long long int total = A*B*C;

    long long int missing_num = M / total;


    if (missing_num * total == M)
    {
        printf("%lld\n", missing_num);
    }
    else 
    {
        printf("-1\n");
    }

    }
    
    return 0;
}