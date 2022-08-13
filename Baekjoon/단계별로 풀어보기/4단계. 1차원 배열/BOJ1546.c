#include <stdio.h>

int main()
{
    int N, M = 0;
    double tot = 0;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if(M < A[i]) M = A[i];
    }
    for(int i = 0; i < N; i++)
    {
        tot += (double)A[i] / M * 100;
    }
    printf("%.2lf", tot / N);
    return 0;
}