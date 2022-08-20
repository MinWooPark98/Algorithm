#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int size = 0;
    for(long long temp = n; temp > 0; temp /= 10)
        ++size;
    int* answer = (int*)malloc(sizeof(int) * size);
    for(int i = 0; i < size; ++i, n /= 10)
        answer[i] = n % 10;
    return answer;
}