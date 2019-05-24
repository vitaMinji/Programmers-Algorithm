#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    int count = 0;
    vector<int> answer;
    for(int i=0; i<arr.size(); i++){
        if(i==0){
            answer.push_back(arr.at(i));
            continue;
        }
        if(answer.at(count)!=arr.at(i)){
            answer.push_back(arr.at(i));
            count++;
        }
    }

    return answer;
}
