#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int c;
    
    if (a > b)
    {
        c = a;
        a = b;
        b = c;
    }
    
    while (a <= b)
        answer += a++;
    
    return (answer);
}
