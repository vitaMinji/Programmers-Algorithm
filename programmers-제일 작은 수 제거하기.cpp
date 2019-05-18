#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
 
    int min=1000000;
    for(int i=0; i<arr.size(); i++){
        if(min>arr.at(i)){
            min=arr.at(i);
        }
    }
    if(arr.size()==1){
        answer.push_back(-1);
    }else{
       for(int i=0; i<arr.size(); i++){
           if(arr.at(i)==min) continue;
           answer.push_back(arr.at(i));
       }
        
    }
    return answer;
}
