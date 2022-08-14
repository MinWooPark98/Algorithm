#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    char ans[51] = { 0 };
    int j = 0, count = 1;
    for(int i = 0; i < 51; ++i)
    {
        if(s[i] == 0)
            break;
        else if(s[i] >= 48 && s[i] <= 57)
        {
            ans[j] = s[i];
            j++;
        }
        else if(s[i] == 'z')
        {
            ans[j] = 48;
            i += 3;
            j++;
        }
        else if(s[i] == 'e')
        {
            ans[j] = 56;
            i += 4;
            j++;
        }
        else if(s[i] == 'f')
        {
            if(s[i + 1] == 'o')
            {
                ans[j] = 52;
                i += 3;
                j++;
            }
            else
            {
                ans[j] = 53;
                i += 3;
                j++;
            }
        }
        else if(s[i] == 'n')
        {
            ans[j] = 57;
            i += 3;
            j++;
        }
        else if(s[i] == 'o')
        {
            ans[j] = 49;
            i += 2;
            j++;
        }
        else if(s[i] == 't')
        {
            if(s[i + 1] == 'w')
            {
                ans[j] = 50;
                i += 2;
                j++;
            }
            else
            {
                ans[j] = 51;
                i += 4;
                j++;
            }
        }
        else if(s[i] == 's')
        {
            if(s[i + 1] == 'i')
            {
                ans[j] = 54;
                i += 2;
                j++;
            }
            else
            {
                ans[j] = 55;
                i += 4;
                j++;
            }
        }
    }
    int size = strlen(ans);
    for(int i = size - 1; i >= 0; --i)
    {
        answer += (ans[i] - 48) * count;
        count *= 10;
    }
    
    return answer;
}