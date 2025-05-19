#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    
    vector<vector<int> >matrix(3,vector<int>(4));
    vector<vector<int> >matrix2(3,vector<int>(4,8));
    for(int i = 0;i<3 ;i++){
     for(int j = 0 ;j<4 ;j++){
        cout<<matrix2[i][j]<<" ";
     }
    }

    cout<<"\nRows:"<<matrix2.size();
    cout<<"\ncol:"<<matrix2[0].size();
     

    return 0;
}