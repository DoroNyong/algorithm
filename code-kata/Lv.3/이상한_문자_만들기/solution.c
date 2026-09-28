#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char *s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t s_len = strlen(s);
    char *answer = (char *)malloc(s_len + 1);
    
    int n = 0;
    size_t i = 0;
    for (i; i < s_len; ++i)
    {
        if (s[i] == ' ')
        {
            n = 0;
            answer[i] = ' ';
            continue ;
        }
        
        if (n)
        {
            n = 0;
            answer[i] = tolower(s[i]);
        }
        else
        {
            n = 1;
            answer[i] = toupper(s[i]);
        }
    }
    answer[i] = '\0';
    
    return (answer);
}
