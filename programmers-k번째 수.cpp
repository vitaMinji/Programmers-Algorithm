#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    const int size = commands.size();
    for(int i=0; i<size; i++) {
        
        int cand[3];
        for(int j=0; j<commands[i].size();j++) {
            cand[j] = commands[i][j];
        }
        
        vector<int> arr;//이렇게 하면 계속 새로운게 됨 ㅇㅅㅇ
        
        for(int k=cand[0]-1; k<cand[1]; k++) {
            arr.push_back(array[k]);
        }
        
        sort(arr.begin(), arr.end());
        
        answer.push_back(arr[cand[2]-1]);
    }
    return answer;
}
