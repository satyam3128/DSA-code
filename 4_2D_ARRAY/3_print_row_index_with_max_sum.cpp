#include<iostream>
using namespace std;

int main(){
    int arr[5][4];
    for(int i = 0;i<5;i++){
        for(int j = 0;j<4;j++){
            cout<<"Enter "<<i<<" "<<j<<" Element of Array:";
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<5;i++){
        for(int j = 0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int sum = INT16_MIN, index = -1 ;
    for(int i =0 ;i< 5 ;i++){
        int total = 0;
        for(int j = 0;j<4 ;j++){
            total += arr[i][j];
        }
        if(sum<total){
            sum = total;
            index = i;
        }
        
    }
    

    cout<<"maximum sum row's: "<<index <<" is "<<sum;
}