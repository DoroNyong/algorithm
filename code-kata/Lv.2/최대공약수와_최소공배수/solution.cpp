#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int tmp;
    int res;
    
    if (n > m)
    {
        tmp = n;
        n = m;
        m = tmp;
    }
    
    for (tmp = 1; tmp <= n; ++tmp)
    {
        if ((n % tmp == 0) && (m % tmp == 0))
            res = tmp;
    }
    answer.push_back(res);
    
    res = res * (n / res) * (m / res);
    answer.push_back(res);
    
    return (answer);
}
