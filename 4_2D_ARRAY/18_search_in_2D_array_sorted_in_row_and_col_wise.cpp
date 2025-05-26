#include<iostream>
#include <vector>

using namespace std;
bool search(vector<vector<int>>&mat , int key){
    int row = mat.size();
    int col = mat[0].size();
    int i = 0;
    int j = col-1;
    while(i< row  && j>=0){
        if(mat[i][j] == key) return 1;
        else if(mat[i][j] > key) j--;
        else i++;
    }
    return 0;

}
int main(){
    int r,c;
    cout<<"Enter the Row and Column :";
    cin>>r>>c;
    
    vector<vector<int>>matrix(r,vector<int>(c));
    for(int i = 0;i<r ;i++){
        for(int j = 0;j<c ;j++){
            cout<<"Enter the "<<i<<j<<" element of Matrix:";
            cin>>matrix[i][j];
        }
    }

    for(int i = 0 ;i< r ;i++){
        for(int j = 0;j<c ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int k ;
    cout<<"Ente element that you want to search:";
    cin>>k;
    
    if(search(matrix, k)) {
        cout<<k<<" is found in Matrix";

    }
    else{
        cout<<k<<" is not found in the matrix";
    }


    return 0;
}