#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

static void sort_arr(char **s, size_t len);

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char *solution(const char *s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t len = strlen(s);
    char *answer = (char *)malloc(sizeof(char) * (len + 1));
    if (!answer)
        return (NULL);
    
    strcpy(answer, s);
    sort_arr(&answer, len);
    
    return (answer);
}

static void sort_arr(char **s, size_t len)
{
    for (size_t i = 0; i < len - 1; ++i)
    {
        if ((*s)[i] < (*s)[i + 1])
        {
            char tmp = (*s)[i];
            (*s)[i] = (*s)[i + 1];
            (*s)[i + 1] = tmp;
            
            sort_arr(s, len);
        }
    }
}
