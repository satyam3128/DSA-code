#include <iostream>
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

    // Reverse of Each row
    
    for(int i = 0;i<row ;i++){
    int j = 0;
    int k = col-1;
        while(j<=k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    cout<<"\nReversed Each Row of Matrix :\n";
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}