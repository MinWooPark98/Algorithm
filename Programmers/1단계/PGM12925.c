#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0, count = 1;
    int size = strlen(s);
    for(int i = size - 1; i >= 0; --i)
    {
        if(s[i] == '-')
            answer *= (-1);
        else if(s[i] == '+')
            break;
        else
        {
            answer += (s[i] - 48) * count;
            count *= 10;
        }
    }
    return answer;
}