#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size:";
    cin>>n;
    
    vector<vector<int>>matrix(n,vector<int>(n));
    cout<<"Enter the Element of Matrix:\n";
    for(int i = 0;i< n ;i++){
        for(int j = 0;j< n ;j++){
            cout<<"Enter the "<<i<<","<<j<<" element of Array:";
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    for(int i = 0;i< n ;i++){
        for(int j = 0;j< n ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // transpose of matrix
    for(int i  = 0;i<n-1;i++){
        for(int j = i+1 ;j<n ;j++){
            swap(matrix[i][j] , matrix[j][i]);
        }

    // reversing the rowise 
    for(int i = 0;i< n ;i++){
        int start  =0 ;
        int end = n-1 ;
        while(start<end){
            swap(matrix[i][start] ,  matrix[i][end]);
            start++;
            end--;
        }
    }
    
    cout<<"\nRotated Matrix:\n";
    for(int i = 0;i< n ;i++){
        for(int j = 0;j< n ;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }
    return 0;
}