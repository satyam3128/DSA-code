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

    cout<<"\nELEMENT IN SPRIAL FORM:\n";

    int top = 0;
    int right = col -1;
    int left = 0 ;
    int bottom = row-1;

    while(top<= bottom && left <=right){
        // left to right printing 
        for(int i = left ;i<=right ;i++)
            cout<<matrix[top][i]<<" ";
            top++;
        // right up to down
        for(int j = top ;j<=bottom ;j++)
            cout<<matrix[j][right]<<" ";
            right--;
        // right to left
        if(top<=bottom){
            for(int i = right ;i>=left ;i--)
            cout<<matrix[bottom][i]<<" ";
            bottom--;
        }
        // bottom to top 
        if(left<=right){
            for(int j = bottom ;j>=top ;j--)
            cout<<matrix[j][left]<<" ";
            left++;
        }
        

    }


    return 0;
}