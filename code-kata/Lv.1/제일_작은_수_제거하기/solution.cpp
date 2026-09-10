#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int low = arr[0];
    
    for (int i = 1; i < arr.size(); ++i)
    {
        if (low > arr[i])
            low = arr[i];
    }
    
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == low)
            continue ;
        answer.push_back(arr[i]);
    }
    
    if (answer.empty())
        answer.push_back(-1);
    
    return (answer);
}
