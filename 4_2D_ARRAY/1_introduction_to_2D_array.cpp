#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int col;
    int row;
    cout<<"Enter the ROW:";
    cin>>row;
    cout<<"Enter the COLUMN:";
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

    

     

    return 0;
}