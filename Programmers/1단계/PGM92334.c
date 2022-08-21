#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int DistinguishUser(char s1[], char * s2[], int len);
// id_list_len은 배열 id_list의 길이입니다.
// report_len은 배열 report의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * id_list_len);
    memset(answer, 0, sizeof(int) * id_list_len);
    int a[1000][1000] = {0}; //신고에 대해 신고자, 피신고자 횟수 저장할 배열
    int sum[1000] = {0}; // 피신고자 횟수 저장할 배열(중복 제외)
    
    // 띄어쓰기 기준으로 피신고자 구분, 신고 횟수 저장
    for(int i = 0; i < report_len; ++i)
    {
        int j = 0;
        while(report[i][j] != ' ')
            ++j;
        char id[10] = {0};
        char id_reported[10] = {0};
        strncpy(id, report[i], sizeof(char) * j); 
        strcpy(id_reported, report[i] + j + 1); 
        int a_i = DistinguishUser(id, id_list, id_list_len);
        int a_j = DistinguishUser(id_reported, id_list, id_list_len);
        
        ++a[a_i][a_j];
        
        if(a[a_i][a_j] == 1) // 중복 제외
            ++sum[a_j];
    }
    
    // k명 이상에게 신고당했을 시, 신고자에게 메일 1회
    for(int i = 0; i < id_list_len; ++i)
    {
        if(sum[i] >= k)
        {
            for(int j = 0; j < id_list_len; ++j)
            {
                if(a[j][i])
                    ++answer[j];
            }
        }
    }    
    return answer;
}

// id_list에 있는 순서에 따라 숫자 반환 ex) id_list = {"con", "ryan"}일 때 con이 들어오면 0 반환
int DistinguishUser(char s1[], char * s2[], int len)
{
    for(int i = 0; i < len; ++i)
    {
        if(!strcmp(s1, s2[i]))
            return i;
    }
}