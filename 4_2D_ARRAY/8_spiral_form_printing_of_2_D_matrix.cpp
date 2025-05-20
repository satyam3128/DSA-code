#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int row,col;
    row = 3;
    col = 3;
    int matrix[row][col];
    for(int i = 0;i< row ;i++){
        for(int j = 0;j<col;j++){
            cout<<"Enter the "<<i<<","<<j<<" element of Array:";
            cin>>matrix[i][j];
        }
    }
    cout<<"\n";

    for(int i = 0 ;i<row ;i++){
        for(int j = 0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nSPiral Form Printing:-\n";

    int top = 0 ;
    int right = 2 ;
    int left = 0 ;
    int bottom = 2;

    while(top<=bottom && left <= right){
        for(int i = left ; i<=right ;i++){
            cout<<matrix[top][i]<<" ";
            
        }top++;
        for(int i = top ;i<=bottom ;i++){
            cout<<matrix[i][right]<<" ";
            
        }right--;
        if(top<=bottom){
        for(int i = right ;i>= left ;i--){
            cout<<matrix[bottom][i]<<" ";
            
        }bottom--;}
        if(left<=right){
        for(int i = bottom ;i>= top ;i--){
            cout<<matrix[i][left]<<" ";
            
        }left++;
        }
    
    }
    

    return 0;
}