#include <stdio.h>

int main()
{
    int n, div = 2;
    scanf("%d", &n);
    while(1)
    {
        if(n == 1) break;
        if(n % div == 0)
        {
            n /= div;
            printf("%d\n", div);
        }
        else
            ++div;
    }
    return 0;
}