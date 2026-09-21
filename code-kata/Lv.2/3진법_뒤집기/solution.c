#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    long long tmp = 0;
    
    for (int i = n; i > 0; i /= 3)
        tmp = (tmp * 10) + (i % 3);

    long long tmp2 = tmp;
    tmp = 0;
    for (long long i = tmp2; i > 0; i /= 10)
        tmp = (tmp * 10) + (i % 10);
    
    tmp2 = tmp;
    tmp = 0;
    for (long long i = tmp2; i > 0; i /= 10)
        tmp = (tmp * 3) + (i % 10);
    
    answer = tmp;
    return (answer);
}
