#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> arr;
    for (int i : numbers)
        arr.push_back(to_string(i));
    sort(arr.begin(), arr.end(), [](string &a, string &b) {
        return a + b > b + a;
    } );
    for (string i : arr)
        answer += i;
    
    return answer[0] == '0' ? "0" : answer;
}