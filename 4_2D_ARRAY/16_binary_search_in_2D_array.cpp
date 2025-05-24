#include <iostream>
#include<vector>
using namespace std;
bool binary_search(vector<vector<int>>&matrix , int target){
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i = 0;i<row ;i++){
        
        
        if(matrix[i][0] <= target && target>=matrix[i][col-1]){
            int start = 0 ;
            int end = col-1;
            int mid;
            while(start<=end){
                mid = start + (end - start)/2;
                if(matrix[i][mid] == target){
                    return 1;
                }
                else if(matrix[i][mid] < target){
                    end = mid -1;
                }
                else{
                    start = mid + 1;
                }
            }
        }

    }
    return 0 ;
    
}
int main(){
    int row , col;
    cout<<"Enter the Rows of matrix:";
    cin>>row;
    cout<<"Enter the column of matrix:";
    cin>>col;
    vector<vector<int>>matrix(row, vector<int>(col));

    for(int i  = 0;i< row; i++){
        for(int j = 0;j<col ;j++){
            cout<<"Enter the "<<i<<","<<j<<" element of array:";
            cin>>matrix[i][j];
        }
    }

    
    for(int i  = 0;i< row; i++){
        for(int j = 0;j<col ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cout<<"Enter the target to search:";
    cin>>x;
    int ans =  binary_search(matrix,x);
    if(ans == 1){
        cout<<x<<" is found in the matrix";
    }
    else{
        cout<<x<<" is not found in the matrix";
    }
    

    return 0;
}