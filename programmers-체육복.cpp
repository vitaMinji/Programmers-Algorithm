#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int ans[n];

    int l[n];
    int r[n];
     for(int i=0; i<n; i++){
        l[i]=0;//lost초기화
    }
      for(int i=0; i<n; i++){
        r[i]=0;//reserve초기화
    }
    for(int i=0; i<lost.size(); i++){
        l[lost.at(i)-1]=1;
    }
    
     for(int i=0; i<reserve.size(); i++){
        r[reserve.at(i)-1]=1;
    }
    
    for(int i=0; i<n; i++){
        ans[i]=r[i]-l[i];
    }
    
    int answer = 0;   
    
    for(int i=0; i<n; i++){
        if(ans[i]==0) {
            answer++;
        }else if(ans[i]==1){
            answer++;
            if(i-1>=0&&ans[i-1]==-1){
                    ans[i-1]=0;
                    answer++;
            }else if(i+2<=n&&ans[i+1]==-1){
                    ans[i+1]=0;
                    answer++;
                    i++; 
            }
        }
    }

    return answer;
}
