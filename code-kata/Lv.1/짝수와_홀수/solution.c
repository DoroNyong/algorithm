#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char *)malloc(5 * sizeof(char));
    sprintf(answer, "%s", (num % 2 == 0) ? "Even" : "Odd");
    return (answer);
}
