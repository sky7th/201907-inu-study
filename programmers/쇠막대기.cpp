#include <string>
#include <vector>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    int cnt = 0;
    for (int i=0; i<arrangement.length(); i++) {
        if (arrangement[i] == '(' && arrangement[i+1] == ')' && i < arrangement.length()-1) {
            answer += cnt;
            i++;
        }
        else if (arrangement[i] == '(') {
            cnt++;
        }
        else {
            answer++;
            cnt--;
        }
        
    }
    
    return answer;
}