#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int a;
    for(int i=0; i<seoul.size(); i++){
        if(seoul.at(i)=="Kim"){
          a=i;
            break;
        }
    }
    answer="김서방은 ";
    string b = to_string(a);
    answer.append(b);
    answer.append("에 있다");
    return answer;
}
