#include <iostream>
#include <vector>
using namespace std;

int main(){
    int ball_number;
    cin>>ball_number; // 공의 갯수 입력
    vector<vector <int>> v(ball_number, vector<int> (2,0));
    for(int temp =0 ; temp<ball_number ; temp++){
        cin>>v[temp][0]>>v[temp][1];
    }
    /*for(int temp =0 ; temp<ball_number ; temp++){
        cout<<v[temp][0]<<"\t"<<v[temp][1]<<endl;
    }*/
    
}
