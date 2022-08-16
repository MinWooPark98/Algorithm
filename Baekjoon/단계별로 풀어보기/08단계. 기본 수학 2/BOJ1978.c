#include <stdio.h>

int main()
{
    int N, n, count;
    scanf("%d", &N);
    count = N;
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &n);
        if(n == 1) count--;
        for(int j = 2; j < n; j++)
        {
            if(n % j == 0)
            {
                count--;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}