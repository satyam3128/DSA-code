#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter The Row:";
    cin>>row;
    cout<<"Enter the Column:";
    cin>>col;
    vector<vector<int> >matrix(row,vector<int>(col));
    for(int i = 0;i< col ;i++){
        for(int j = 0;j<row ;j++){
            cout<<"Enter the "<<i<<","<<j<<" element of Array:";
            cin>>matrix[i][j];
        }
    }
    cout<<"\n";

    for(int  i = 0 ;i<col ;i++){
        for(int j = 0;j<row;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nwave Form Printing:-\n";
    
    for(int i = 0;i< col; i++){
        if(i % 2 != 0){
            for(int j = row-1 ;j>=0 ;j--){
                cout<<matrix[j][i]<<" ";
            }
            
        }
        else{
            for(int j = 0;j<row ;j++){
                cout<<matrix[j][i]<<" ";
            }
           
        }
            
    }
    

    return 0;
}