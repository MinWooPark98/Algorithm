#include <stdio.h>

int main()
{
    int N, sum, count;
    char C[80];
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%s", C);
        sum = 0;
        count = 0;
        for(int j = 0; j < 80; j++)
        {
            if(C[j] == 'O')
            {
                count++;
                sum += count;
            }
            else if(C[j] == 0) break;
            else
                count = 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}