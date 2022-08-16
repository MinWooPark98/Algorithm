#include <stdio.h>

void jh_1(int n);
void jh_2(int n);
void jh_3(int n);
void jh(int n);
void printLine(int n);

int main()
{
    int N;
    scanf("%d", &N);
    jh(N);
    return 0;
}

void jh_1(int n)
{
    if (n == 0 || n == 1)
        printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
    else
        jh_1(n - 1);
    printLine(n - 1);
    printf("\"재귀함수가 뭔가요?\"\n");
    printLine(n - 1);
    printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
    printLine(n - 1);
    printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
    printLine(n - 1);
    printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
    return;
}

void jh_2(int n)
{
    printLine(n);
    printf("\"재귀함수가 뭔가요?\"\n");
    printLine(n);
    printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
    return;
}

void jh_3(int n)
{
    if (n == -1)
        return;
    printLine(n);
    printf("라고 답변하였지.\n");
    jh_3(n - 1);
}

void jh(int n)
{
    jh_1(n);
    jh_2(n);
    jh_3(n);
    return;
}

void printLine(int n)
{
    for (int i = 0; i < 4 * n; ++i)
        printf("_");
}
