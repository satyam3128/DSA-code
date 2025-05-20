#include<iostream>
using namespace std;
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int ans[3][3];

    for(int i = 0;i<3 ;i++){
        for(int j = 0;j<3 ;j++){
            cout<<"Enter the "<<i<<" "<<j<<" element of Array:";
            cin>>arr1[i][j];
        }
    }

    for(int i = 0;i<3 ;i++){
        for(int j = 0;j<3 ;j++){
            cout<<"Enter the "<<i<<" "<<j<<" element of Array:";
            cin>>arr2[i][j];
        }
    }
cout<<"\nArray[]:-\n";
    for(int i = 0;i<3 ;i++){
        for(int j = 0;j<3 ;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"\nArray[]:-\n";
    for(int i = 0;i<3 ;i++){
        for(int j = 0;j<3 ;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
// ADD TWO MATRIX
cout<<"\nAns[]:-\n";
    for(int i = 0;i<3 ;i++){
        for(int j = 0;j<3 ;j++){
        ans[i][j] = arr1[i][j] + arr2[i][j];
        cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

// SUBTRACTION OF TWO MATRIX

cout<<"\nANS[]:-\n";
    for(int i = 0;i<3 ;i++){
        for(int j = 0;j<3 ;j++){
        ans[i][j] = arr1[i][j] - arr2[i][j];
        cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;

}