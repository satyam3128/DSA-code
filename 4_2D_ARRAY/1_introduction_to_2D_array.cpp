#include<iostream>
using namespace std;


int main(){
    int arr[4][3];
    
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<"Enter "<<i<<" "<<j<<" Element of Array:";
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int x =7;
    for(int i = 0 ;i< 3 ;i++){
        for(int j = 0;j< 4 ;j++){
            if(arr[i][j] == x){
                cout<<"Yes Found :";
                return 0;
            }
        }

    }
    cout<<"Not Found ";



    return 0;
}