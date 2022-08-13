#include <stdio.h>

int main()
{
    int C, N, tot, stu;
    scanf("%d", &C);
    for(int i = 0; i < C; i++)
    {
        tot = 0;
        stu = 0;
        scanf("%d", &N);
        int score[N];
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &score[j]);
            tot += score[j];
        }
        for(int j = 0; j < N; j++)
        {
            if(score[j] > (double)tot / N)
                stu++;
        }
        printf("%.3lf%%\n", (double)stu / N * 100);
    }
    return 0;
}