#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// math 헤더 안쓰고  해봄

long long solution(long long n) {
    long long count;
    for(count = 1; count <= n; count *= 10)
    {
        if(count * count > n)
            break;
    }
    count /= 10;
    //그냥 계산 범위 축소 시켜 보려고 함.
    
    for(long long i = count; i < count * 10; ++i)
    {
        if(i * i == n)
            return (i + 1) * (i + 1);
    }
    return -1;
}