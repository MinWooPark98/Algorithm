#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int sum = 0;
    
    for(size_t i = 0; i < nums_len; ++i)
    {
        for(size_t j = i + 1; j < nums_len; ++j)
        {
            for(size_t k = j + 1; k < nums_len; ++k)
            {
                sum = nums[i] + nums[j] + nums[k];
                for(int l = 2; l < sum; ++l)
                {
                    if(!(sum % l)) break;
                    if(l == sum - 1) ++answer;
                }
            }
        }
    }
    return answer;
}