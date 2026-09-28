#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    size_t t_len = strlen(t);
    size_t p_len = strlen(p);
    
    for (size_t i = 0; i <= t_len - p_len; ++i)
    {
        if (strncmp(t + i, p, p_len) <= 0)
            ++answer;
    }
    
    return (answer);
}
