#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    
    while (left <= right)
    {
        int n = 0;
        
        for (int i = 1; i <= left; ++i)
        {
            if (left % i == 0)
                ++n;
        }
        
        if (n % 2 == 0)
            answer += left;
        else
            answer -= left;
        
        ++left;
    }
    
    return (answer);
}
