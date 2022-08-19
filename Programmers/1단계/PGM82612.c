#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, unsigned int money, int count) {
    long long answer = -1;
    long long moneytopay = count * (count + 1) / 2;
    moneytopay *= price;
    if(moneytopay <= money)
        answer = 0;
    else
        answer = moneytopay - money;
    return answer;
}
