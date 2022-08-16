#include <stdio.h>

int main()
{
    int A, B, V;
    int n;
    scanf("%d %d %d", &A, &B, &V);
    if (A >= V)
        n = 0;
    else if ((V - A) % (A - B))
        n = (V - A) / (A - B) + 1;
    else
        n = (V - A) / (A - B);
    printf("%d", n + 1);
    return 0;
}