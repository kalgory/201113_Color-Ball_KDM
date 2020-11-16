#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int ball_number, duplexprocessing=0;
    cin>>ball_number; // 공의 갯수 입력
    vector<vector <int>> v(ball_number, vector<int> (2,0));
    vector<int> opervec(ball_number, 0);
    vector<int> color_index(200001,0);
    for(int temp =0;temp<ball_number;temp++){
        cin>>v[temp][1]>>v[temp][0];
    }
    sort(v.begin(),v.end());
    color_index[v[0][1]]=v[0][0];
    for(int temp=1;temp<ball_number;temp++){
        opervec[temp]=opervec[temp-1]+v[temp-1][0]-color_index[v[temp][1]]+duplexprocessing;
        duplexprocessing=color_index[v[temp][1]];
        color_index[v[temp][1]]+=v[temp][0];
    }
    for(int temp =0 ; temp<ball_number ; temp++){
        cout<<opervec[temp]<<endl;
    }

    
}
