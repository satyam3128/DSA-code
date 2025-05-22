#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int row ;
    int col ;
    cout<<"Enter the number of Row:";
    cin>>row;
    cout<<"Enter the number of Column:";
    cin>>col;
    vector<vector<int> >matrix(row,vector<int>(col));
    cout<<"\nEnter the Elements of Matrix:\n";
    for(int i = 0;i< row;i++){
        for(int j = 0; j<col;j++){
        cout<<"Enter "<<i<<","<<j<<" element :";
        cin>>matrix[i][j];
        }
    }
    cout<<"\nMATRIX[][]:-\n";
    for(int i = 0;i< row ;i++){
        for(int j = 0;j< col ;j++){
            
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // int arr[row][col];
    // for(int i = 0;i<row ;i++){
    //     for(int j = 0 ;j<col ;j++){
    //         arr[j][i] = matrix[i][j];
    //     }
    // }

    for(int i = 0 ;i<row-1; i++){
        for(int j = i+1;j<col ;j++ ){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }


    // for(int i = 0;i< row;i++){
    //     for(int j = 0;j< col ;j++){
    //         if(i< j ){
    //             swap(matrix[i][j] , matrix[j][i]);
    //         }

    //     }
    // }

    cout<<"\nTranspsose of matrix[]\n";
    for(int i = 0;i<row ;i++){
        for(int j = 0 ;j<col ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
     
    return 0;
}