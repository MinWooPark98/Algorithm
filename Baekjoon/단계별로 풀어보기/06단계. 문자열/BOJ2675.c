#include <stdio.h>
#include <string.h>

int main()
{
    int T, R;
    char S[21];
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        memset(S,0,sizeof(S));
        scanf("%d %s", &R, S);
        for(int j = 0; j < 21; j++)
        {
            if(S[j] == 0)
            {
                printf("\n");
                break;
            }
            for(int k = 0; k < R; k++)
                printf("%c", S[j]);
        }
    }
    return 0;
}