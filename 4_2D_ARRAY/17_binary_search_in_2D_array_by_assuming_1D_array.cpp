#include <iostream>
#include<vector>
using namespace std;
bool binary_search(vector<vector<int>>&matrix , int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0 ;
    int end = row * col - 1;
    int mid;
    while(start <= end){
        mid = start + (end - start);
        int row2_index = mid / col;
        int col2_index = mid % col;
        if(matrix[row2_index][col2_index] == target){
            return 1;
        }
        else if(matrix[row2_index][col2_index] > target){
            end = mid -1;
        }
        else{
            start = mid +1;
        }

    }
    return 0;
    
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