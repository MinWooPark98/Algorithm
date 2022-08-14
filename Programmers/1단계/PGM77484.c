#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = malloc(2 * sizeof(int));
    int min = 0, max = 0;;
    for(size_t i = 0; i < lottos_len; ++i)
    {
        if(lottos[i] == 0)
            ++max;
        else
        {
            for(size_t j = 0; j < win_nums_len; ++j)
            {
                if(lottos[i] == win_nums[j])
                    ++min;
            }
        }
    }
    max += min;
    answer[0] = max;
    answer[1] = min;
    for(int i = 0; i < 2; ++i)
    {
        if(answer[i] == 0)
            answer[i] = 6;
        else
            answer[i] = 7 - answer[i];
    }
    return answer;
}