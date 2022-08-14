#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int cal = A / (C - B) + 1;
    
    if (B >= C) printf("-1");
    else printf("%d", cal);
    
    return 0;
}