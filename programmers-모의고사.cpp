#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int student1[10000];
int student2[10000];
int student3[10000];
vector<int> answer;
int st1,st2,st3;

vector<int> solution(vector<int> answers) {
    int s1=1;
    
    for(int i=0; i<10000; i++){
        if(s1%6==0){
            s1++;
        }
       student1[i]=s1%6;
        s1++;
    }
    
    bool s2=true;
    
    int s22=1;
    
     for(int i=0; i<10000; i++){
         if(s2==true){
             student2[i]=2;
             s2=false;
         }else {
            if(s22%6==0||s22%6==2){
             s22++;
            }
            student2[i]=(s22%6);
            s22++;
            s2=true;
        }
     }

    for(int i=0; i<10000; i++){
        if(i%10==1||i%10==0){
            student3[i]=3;
        }else if(i%10==2||i%10==3){
            student3[i]=1;
        }else if(i%10==4||i%10==5){
            student3[i]=2;
        }else if(i%10==6||i%10==7){
            student3[i]=4;
        }else if(i%10==8||i%10==9){
            student3[i]=5;
        }
    }	
    
 
    for(int i=0; i<answers.size(); i++){
        if(student1[i]==answers.at(i)){
            st1++;
        }
         if(student2[i]==answers.at(i)){
            st2++;
        }
         if(student3[i]==answers.at(i)){
            st3++;
        }
    }
    int ans[3];
    ans[0]=st1;
    ans[1]=st2;
    ans[2]=st3;

    int value;
    value = max(max(ans[0],ans[1]),ans[2]);

    for(int i = 0; i < 3; i++)
        if(ans[i] == value) answer.push_back(i+1);

    


    return answer;
}
