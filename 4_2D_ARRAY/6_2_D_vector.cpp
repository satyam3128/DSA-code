#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter the row and column:";
    cin>>n>>m;
    vector<vector<int> >matrix(3,vector<int>(4));
    vector<vector<int> >matrix2(n,vector<int>(m));
    // for(int i = 0;i<n ;i++){
    //  for(int j = 0 ;j<m ;j++){
    //     cout<<matrix2[i][j]<<" ";
    //  }cout<<endl;
    // }

    // cout<<"\nRows:"<<matrix2.size();
    // cout<<"\ncol:"<<matrix2[0].size();


    for(int i = 0;i<n ;i++){
        for(int j = 0 ;j<m ;j++){
            cout<<"Enter the number:";
            cin>>matrix2[i][j];
        }
    }

    for(int i = 0;i< n ;i++){
        for(int j = 0;j<m ;j++){
            cout<<matrix2[i][j]<<" ";

        }
        cout<<endl;
    }
     

    return 0;
}