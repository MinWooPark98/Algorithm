#include <stdio.h>

int main()
{
    int A, B, C;
    int h;
    scanf("%d %d %d", &A, &B, &C);
    h = (B + C) / 60;
    if(h > 0)
    {
        if((A + h) >= 24)
            printf("%d %d", A + h - 24, (B + C) % 60);
        else
            printf("%d %d", A + h, (B + C) % 60);
    }
    else
        printf("%d %d", A, B + C);
    return 0;
}