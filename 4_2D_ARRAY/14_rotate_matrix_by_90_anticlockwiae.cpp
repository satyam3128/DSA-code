#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of Row and column:";
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i =  0 ;i< n ;i++){
        for(int j = 0;j<n  ;j++){
            cout<<"Enter the "<<i<<","<<j <<" element:";
            cin>>matrix[i][j];
        }
    }
    // MATRIC 
    for(int i = 0;i< n;i++){
        for(int j = 0;j< n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    // take transpose of matrix:
    for(int i  = 0 ;i< n-1 ;i++){
        for(int j = i+1 ;j<n ;j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
    // reverse the element of matrix  of column
    for(int j = 0;j< n ;j++){
        int start = 0;
        int end = n-1;
        while(start<end){
            swap(matrix[start][j] , matrix[end][j]);
            start++;
            end--;
        }
    }
    cout<<"\nROTATE MATRIX BY 90 degree in anticlock wise:\n";
    for(int i = 0;i< n;i++){
        for(int j = 0;j< n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}