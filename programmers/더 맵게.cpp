#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int> > pq(scoville.begin(), scoville.end());
    
    while(!pq.empty()) {
        int scv_first = pq.top(); pq.pop();
        if (scv_first >= K) break;
        if (pq.size() == 0) return -1;

        int scv_second = pq.top(); pq.pop();
        
        int scv_shake = scv_first + (scv_second * 2);
        pq.push(scv_shake);

        answer++;
    }

    return answer;
}