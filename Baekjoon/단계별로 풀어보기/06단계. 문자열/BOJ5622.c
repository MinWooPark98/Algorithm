#include <stdio.h>
#include <string.h>

int main()
{
    char c[16] = { 0 };
    int n = 0;
    scanf("%s", c);
    for (int i = 0; i < 16; i++)
    {
        if (c[i] == 0) break;
        if (c[i] >= 65 && c[i] <= 67) n += 3;
        else if (c[i] >= 68 && c[i] <= 70) n += 4;
        else if (c[i] >= 71 && c[i] <= 73) n += 5;
        else if (c[i] >= 74 && c[i] <= 76) n += 6;
        else if (c[i] >= 77 && c[i] <= 79) n += 7;
        else if (c[i] >= 80 && c[i] <= 83) n += 8;
        else if (c[i] >= 84 && c[i] <= 86) n += 9;
        else if (c[i] >= 87 && c[i] <= 90) n += 10;
    }
    printf("%d", n);
    return 0;
}