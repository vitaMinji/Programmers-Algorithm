#include <string>
#include <vector>

using namespace std;

int number[1000001];

int solution(int n) {
    int answer = 0;
    for(int i=2; i<=n; i++){
        if(number[i]==-1) continue;
        for(int j=i+i; j<=n; j=j+i){
            number[j]=-1;
        }
    }
    for(int i=2; i<=n; i++){
        if(number[i]!=-1){
            answer++;
        }
    }
    return answer;
}
