#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char) * 4);
    int day = 0;
    switch (a)
    {
        case 1:
            break;
        case 2:
            day += 31;
            break;
        case 3:
            day += 60;
            break;
        case 4:
            day += 91;
            break;
        case 5:
            day += 121;
            break;
        case 6:
            day += 152;
            break;
        case 7:
            day += 182;
            break;
        case 8:
            day += 213;
            break;
        case 9:
            day += 244;
            break;
        case 10:
            day += 274;
            break;
        case 11:
            day += 305;
            break;
        case 12:
            day += 335;
            break;
        default:
            break;
    }
    day += b;
    switch(day % 7)
    {
        case 0:
            strcpy(answer,"THU"); 
            break;
        case 1:
            strcpy(answer,"FRI");
            break;
        case 2:
            strcpy(answer,"SAT");
            break;
        case 3:
            strcpy(answer,"SUN");
            break;
        case 4:
            strcpy(answer,"MON");
            break;
        case 5:
            strcpy(answer,"TUE");
            break;
        case 6:
            strcpy(answer,"WED");
            break;
        default:
            break;
    }
    return answer;
}