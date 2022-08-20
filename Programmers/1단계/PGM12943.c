#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    long long n = num;
    for(int answer = 0; answer < 500; ++answer)
    {
        if(n == 1)
            return answer;
        if(n % 2)
            n = n * 3 + 1;
        else
            n /= 2;
    }
    return -1;
}