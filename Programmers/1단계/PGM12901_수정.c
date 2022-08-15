#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char) * 4);
    int dayofmonth[12] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    char * dayofweek[7] = {"THU", "FRI","SAT","SUN","MON","TUE","WED"};
    int day = b;
    
    for(int i = 0; i < a; ++i)
        day += dayofmonth[i];
    
    answer = dayofweek[day % 7];
    return answer;
}