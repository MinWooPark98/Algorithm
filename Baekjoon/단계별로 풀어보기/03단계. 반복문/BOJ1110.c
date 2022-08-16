#include <stdio.h>

int main()
{
    int N, N_first, i;
    scanf("%d", &N);
    N_first = N;
    i = 0;
    while(1)
    {
        if(N < 10)
            N = N * 11;
        else
            N = (N % 10) * 10 + (N / 10 + N % 10) % 10;
        i++;
        if(N == N_first) break;
    }
    printf("%d", i);
    return 0;
}