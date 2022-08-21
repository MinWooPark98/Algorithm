#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    
    for(int temp = x; temp > 0; temp /= 10)
        sum += temp % 10;
    
    if(x % sum)
        answer= false;
    
    return answer;
}