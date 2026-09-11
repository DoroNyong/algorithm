#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char *solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char *)malloc(sizeof(char) * (n * 3 + 1));
    if (!answer)
        return (NULL);
    
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            memcpy(&answer[i * 3], "수", 3);
        else
            memcpy(&answer[i * 3], "박", 3);
    }
    answer[n * 3] = '\0';
    
    return (answer);
}
