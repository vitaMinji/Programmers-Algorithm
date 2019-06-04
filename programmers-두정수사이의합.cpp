#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a==b){
        answer=a;
    }else{
        long long count = 0;
        if(a>b){
            for(int i=b; i<=a; i++){
                count+=i;
            }
        }else{
            for(int i=a; i<=b; i++){
                count+=i;
            }
        }
        answer=count;
    }
    return answer;
}
