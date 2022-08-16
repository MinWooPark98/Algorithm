#include <stdio.h>
#include <string.h>

int main()
{
    char c[1000001];
    scanf("%[^\n]s", c);
    int size = strlen(c);
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        if (c[0] == 32 && size == 1)
        {
            count = 0;
            break;
        }
        else
        {
            if (i != 0 && i != size - 1)
            {
                if (c[i] == 32) count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}