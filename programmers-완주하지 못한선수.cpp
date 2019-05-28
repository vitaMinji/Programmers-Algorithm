#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    string temp;
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    for(int i=0; i<completion.size(); i++){
        if(participant.at(i)!=completion.at(i)){
            answer=participant[i];
            break;
        }
    }
    if(answer==""){
        answer=participant.at(participant.size()-1);
    }
    return answer;
}
