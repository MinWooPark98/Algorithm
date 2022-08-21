#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * 4);
    strcpy(answer, "RCJA");
    char * other = "TFMN";
    int count[4] = {0};
    
    for(int i = 0; i < survey_len; ++i)
    {
        if(strcmp(survey[i], "RT") == 0)
            count[0] += choices[i] - 4;
        else if(strcmp(survey[i], "TR") == 0)
            count[0] -= choices[i] - 4;
        else if(strcmp(survey[i], "CF") == 0)
            count[1] += choices[i] - 4;
        else if(strcmp(survey[i], "FC") == 0)
            count[1] -= choices[i] - 4;
        else if(strcmp(survey[i], "JM") == 0)
            count[2] += choices[i] - 4;
        else if(strcmp(survey[i], "MJ") == 0)
            count[2] -= choices[i] - 4;
        else if(strcmp(survey[i], "AN") == 0)
            count[3] += choices[i] - 4;
        else if(strcmp(survey[i], "NA") == 0)
            count[3] -= choices[i] - 4;
    }
    for(int i = 0; i < 4; ++i)
    {
        if(count[i] > 0)
            answer[i] = other[i];
    }
    
    return answer;
}