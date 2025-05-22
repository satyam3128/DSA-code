#include <iostream>
#include <vector>
using namespace std;
void Rotate_k_times(vector<vector<int>> &matrix , int k ){
    int n = matrix.size();
    k = k % 4 ;
    while(k){
    for(int i  = 0 ;i< n-1 ;i++){
        for(int j = i+1 ;j<n ;j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
    
    for(int i = 0;i< n ;i++){
        int start = 0;
        int end = n-1;
        while(start<end){
            swap(matrix[i][start] , matrix[i][end]);
            start++;
            end--;
        }
    }
    k--;
}
    
}
int main(){
    int n ;
    cout<<"Enter the number of Row and column:";
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i =  0 ;i< n ;i++){
        for(int j = 0;j<n  ;j++){
            cout<<"Enter the "<<i<<","<<j <<" element:";
            cin>>matrix[i][j];
        }
    }
    // MATRIC 
    for(int i = 0;i< n;i++){
        for(int j = 0;j< n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int k ;
    cout<<"Enter how many time you want to Rotate:";
    cin>>k;
    
    Rotate_k_times(matrix,k);
    
    cout<<"\nROTATED MATRIX :\n";
    for(int i = 0;i< n;i++){
        for(int j = 0;j< n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}