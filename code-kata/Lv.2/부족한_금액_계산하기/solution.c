#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer;
    long long res = 0;
    
    for (int i = 1; i <= count; ++i)
        res += i * price;
    
    if (res > money)
        answer = res - money;
    else
        answer = 0;
    
    return (answer);
}
