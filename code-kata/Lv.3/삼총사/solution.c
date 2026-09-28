#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len은 배열 number의 길이입니다.
int solution(int number[], size_t number_len) {
    int answer = 0;
    
    for (int x = 0; x < number_len - 2; ++x)
    {
        for (int y = x + 1; y < number_len - 1; ++y)
        {
            for (int z = y + 1; z < number_len; ++z)
            {
                if (number[x] + number[y] + number[z] == 0)
                    ++answer;
            }
        }
    }
    
    return (answer);
}
