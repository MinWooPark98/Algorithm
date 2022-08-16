#include <stdio.h>

int main()
{
    int total, kind, a, b, sum = 0;
    scanf("%d %d", &total, &kind);
    for(int i = 0; i < kind; i++)
    {
        scanf("%d %d", &a, &b);
        sum += a * b;
    }
    if(total == sum) printf("Yes");
    else printf("No");
    return 0;
}