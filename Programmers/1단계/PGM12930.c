#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * size);
    strcpy(answer, s);
    printf("%d\n%s", size, answer);
    int count = 0;
    for(int i = 0; i < size; ++i, ++count)
    {
        if(answer[i] == ' ')
            count = -1;
        else if(count % 2 == 0 && answer[i] > 96)
            answer[i] -= 32;
        else if(count % 2 && answer[i] < 91)
            answer[i] += 32;
    }
    return answer;
}