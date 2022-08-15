#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = numbers_len * (numbers_len - 1) / 2;
    int* answer = (int*)malloc(sizeof(int) * size);
    memset(answer, 0, sizeof(int) * size);
    int sum, sum_zero = 0;

    for (size_t i = 0; i < numbers_len; ++i)
    {
        for (size_t j = i + 1; j < numbers_len; ++j)
        {
            sum = numbers[i] + numbers[j];
            for (int k = 0; k < size; ++k)
            {
                if (sum == 0)
                        ++sum_zero;
                
                if (sum_zero == 0 && answer[0] == 0)
                {                    
                    answer[0] = sum;
                    break;
                }
                
                else if (sum == answer[k])
                    break;
                
                else if (sum < answer[k])
                {
                    for (int l = size - 1; l > k; --l)
                        answer[l] = answer[l - 1];
                    answer[k] = sum;
                    break;
                }
                
                else
                {
                    if (answer[k + 1] == 0)
                    {
                        answer[k + 1] = sum;
                        break;
                    }
                }
            }
        }
    }    
    return answer;
}