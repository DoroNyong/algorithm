#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long long n = num;
    
    for (int i = 0; i < 500; ++i)
    {
        if (n == 1)
            break ;
        if (n % 2)
            n = n * 3 + 1;
        else
            n /= 2;
        ++answer;
    }
    if (n != 1)
        answer = -1;

    return (answer);
}
