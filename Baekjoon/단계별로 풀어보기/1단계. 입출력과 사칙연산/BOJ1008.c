#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%.12lf", (double)A / (double)B);
    return 0;
}