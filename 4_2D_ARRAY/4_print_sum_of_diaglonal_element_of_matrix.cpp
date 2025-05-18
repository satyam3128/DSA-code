#include<iostream>
using namespace std;

int main(){
    
    int arr[10][10];
    int row;
    int col;
    cout<<"Row of Matrix:";
    cin>>row;
    cout<<"Column of Matrix:";
    cin>>col;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<"Enter "<<i<<" "<<j<<" Element of Array:";
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nDiagonal ELement of Array: ";
    int sum_diagonal =0;
    for(int i  = 0;i< row ;i++){
        for(int j = 0;j<col ;j++){
            if(i==j){
                cout<<arr[i][j]<<" ";
                sum_diagonal += arr[i][j];
            }
        }
    }
    cout<<"\nSum of Digonal Element of Array: "<<sum_diagonal;
    

   
}