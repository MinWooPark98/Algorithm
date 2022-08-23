#include <stdio.h>
#include <string.h>

int main()
{
    char N[11] = {0};
    scanf("%s", N);
    int size = strlen(N);
    for(int i = size - 1; i > 0; --i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(N[j] < N[j + 1])
            {
                int temp = N[j];
                N[j] = N[j + 1];
                N[j + 1] = temp;
            }
        }
    }
    printf("%s", N);
    return 0;
}