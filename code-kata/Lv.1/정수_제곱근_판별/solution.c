#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = -1;
    for (long long ll = 1; (ll * ll) <= n; ll++)
    {
        if ((ll * ll) == n)
            answer = (ll + 1) * (ll + 1);
    }
    return (answer);
}
