#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s.at(i)>=48&&s.at(i)<=57){
            count++;
        }
    }
    if(count!=s.length()) answer = false;
    
    if(answer==true) {
        if(s.length()==4||s.length()==6){
            answer=true;
        }else answer = false;
    }
    cout<<count;
    return answer;
}
