#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row, col;
    cout<<"Enter the Row :";
    cin>>row;
    cout<<"Enter the Column:";
    cin>>col;
    vector<vector<int>>matrix(row,vector<int>(col));
    cout<<"Enter the Element of Matrix:\n";
    for(int i = 0;i< row ;i++){
        for(int j = 0;j< col ;j++){
            cout<<"Enter the "<<i<<","<<j<<" element of Array:";
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    for(int i = 0;i< row ;i++){
        for(int j = 0;j< col ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>>ans(row , vector<int>(col));
    for(int i = 0;i< row ; i++){
        for(int j = 0 ;j<col ;j++){
            ans[j][col-i-1] = matrix[i][j];
        }
    }
    cout<<"\nRotated Matrix:\n";
    for(int i = 0;i< row ;i++){
        for(int j = 0;j< col ;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}