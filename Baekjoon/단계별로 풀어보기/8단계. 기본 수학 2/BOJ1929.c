#include <stdio.h>
#include <math.h>

int main()
{
    int M, N;
    int root;
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; i++)
    {
        root = sqrt(i);
        if (i == 2 || i == 3) printf("%d\n", i);
        for (int j = 2; j <= root; j++)
        {
            if (i % j == 0)
                break;
            if(j == root)
                printf("%d\n", i);
        }
    }
    return 0;
}