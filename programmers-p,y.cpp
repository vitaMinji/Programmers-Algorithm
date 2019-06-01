#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p=0;
    int y=0;
    
    for(int i=0; i<s.length(); i++){
        if(s.at(i)-65==15||s.at(i)-97==15){
            p++;
        }
        else if(s.at(i)-65==24||s.at(i)-97==24){
            y++;
        }
    }
    if(p==y) answer=true;
    else answer=false;
    return answer;
}
