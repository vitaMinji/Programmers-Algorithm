#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.length()%2==0){
        answer=s.substr((s.length()/2)-1,2);
    }else{
        if(s.length()==1){
            answer=s;
        }else{
            answer=s.at(s.length()/2);   
        }
    }
   
    return answer;
}
