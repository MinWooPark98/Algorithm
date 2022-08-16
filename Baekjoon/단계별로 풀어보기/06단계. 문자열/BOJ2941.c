#include <stdio.h>
#include <string.h>

int main()
{
    char c[101] = { 0 };
    scanf("%s", c);
    int size = strlen(c);
    int count = size;
    for (int i = 0; i < size; i++)
    {
        if (c[i] == '=')
        {
            if((c[i - 1] == 'c') || (c[i - 1] == 's'))
                count--;
            else if (c[i - 1] == 'z')
            {
                if (c[i - 2] == 'd') count -= 2;
                else count--;
            }
        }
        else if (c[i] == '-')
        {
            if((c[i - 1] == 'c') || (c[i - 1] == 'd'))
                count--;
        }
        else if (c[i] == 'j')
        {
            if((c[i - 1] == 'l') || (c[i - 1] == 'n'))
                count--;
        }
    }
    printf("%d", count);
    return 0;
}