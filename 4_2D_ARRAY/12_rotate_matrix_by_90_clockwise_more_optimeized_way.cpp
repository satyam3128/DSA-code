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

    // transpose of matrix
    for(int i  = 0;i<row-1;i++){
        for(int j = i+1 ;j<col ;j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

    // reversing the rowise 
    for(int i = 0;i< row ;i++){
        int start  =0 ;
        int end = col-1 ;
        while(start<end){
            swap(matrix[i][start] ,  matrix[i][end]);
            start++;
            end--;
        }
    }
    
    cout<<"\nRotated Matrix:\n";
    for(int i = 0;i< row ;i++){
        for(int j = 0;j< col ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}