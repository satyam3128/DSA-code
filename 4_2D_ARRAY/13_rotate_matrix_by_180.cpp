#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number of Row and column:";
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i = 0;i< n; i++){
        for(int j = 0;j< n;j++){
            cout<<"Enter the "<<i<<","<<j<<" element:";
            cin>>matrix[i][j];
        }
    }

    // print the matrix

    for(int i  = 0;i< n ; i++){
        for(int j  =0  ;j< n  ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // column wise reverse 
    for(int j = 0;j<n ;j++){
        int start  = 0;
        int end = n-1;
        while(start<end){
            swap(matrix[start][j] , matrix[end][j]);
            start++;
            end--;
        }
    }

    // row wise reverse 

    for(int i = 0;i<n ;i++){
        int start  = 0;
        int end = n-1;
        while(start<end){
            swap(matrix[i][start] , matrix[i][end]);
            start++;
            end--;
        }
    }

    cout<<"180 degree rotate:\n";
    for(int i  = 0;i< n ; i++){
        for(int j  =0  ;j< n  ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}