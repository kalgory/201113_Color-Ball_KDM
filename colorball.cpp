#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int ball_number, duplexprocessing=0; //공의 갯수, 예외처리
    cin>>ball_number; 
    vector<vector <int>> v(ball_number, vector<int> (2,0)); //공의 정보 저장하는 vector
    vector<int> opervec(ball_number, 0); //결과를 저장하는 vector
    vector<int> color_index(200001,0); //color 중복처리 vector
    for(int temp =0;temp<ball_number;temp++){
        cin>>v[temp][1]>>v[temp][0];
    }
    sort(v.begin(),v.end());
    color_index[v[0][1]]=v[0][0];
    for(int temp=1;temp<ball_number;temp++){
        opervec[temp]=opervec[temp-1]+v[temp-1][0]-color_index[v[temp][1]]+duplexprocessing; //해당 공 score계산
        duplexprocessing=color_index[v[temp][1]]; //예외처리 값 초기화
        color_index[v[temp][1]]+=v[temp][0]; //color 중복처리 vector 갱신
    }
    for(int temp =0 ; temp<ball_number ; temp++){
        cout<<opervec[temp]<<endl;
    }

    
}
