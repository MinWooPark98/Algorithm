#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int temp = 1;
    int decimal = 1;
    long long ternary = 0, reverse = 1;

    while (temp <= n)
    {
        temp *= 3;
        reverse *= 10;
    }
    // 계속 오류났던 이유: 입력값이 커지면 reverse가 int 범위를 넘어서
    
    while (n > 0) //3진수로 변환할 떄부터 역순으로 값 저장
    {
        reverse /= 10;
        ternary += (n % 3) * reverse;
        n /= 3;
    }

    while (ternary > 0)
    {
        answer += (ternary % 10) * decimal;
        ternary /= 10;
        decimal *= 3;
    }
    
    return answer;
}