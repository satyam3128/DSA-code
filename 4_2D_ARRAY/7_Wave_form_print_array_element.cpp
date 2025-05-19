#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter The Row:";
    cin>>n;
    cout<<"Enter the Column:";
    cin>>m;
    vector<vector<int> >matrix(n,vector<int>(m));
    for(int i = 0;i< n ;i++){
        for(int j = 0;j<m ;j++){
            cout<<"Enter the "<<i<<" element of Array:";
            cin>>matrix[i][j];
        }
    }
    cout<<"\n";

    for(int  i = 0 ;i<n ;i++){
        for(int j = 0;j<m ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // Wave Form
    cout<<"\nwave Form Printing:-\n";
    
    for(int i = 0;i< n; i++){
        if(i % 2 != 0){
            for(int j = m-1 ;j>=0 ;j--){
                cout<<matrix[j][i]<<" ";
            }
            
        }
        else{
            for(int j = 0;j<m ;j++){
                cout<<matrix[j][i]<<" ";
            }
           
        }
            
    }
    

    return 0;
}