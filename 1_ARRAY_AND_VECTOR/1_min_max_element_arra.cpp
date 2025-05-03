#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the Size of Array:";
    cin>>size;
    int arr[1000];
    for(int i = 0;i<size ;i++){
        cout<<"Enter the "<<i <<" elemnet:";
        cin>>arr[i];
    }
    int min = INT16_MAX;
    int max  = INT16_MIN;
    for(int i = 0;i<size ;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"MAXIMUM Element:"<<max<<endl;
    cout<<"MINIMUM Element:"<<min<<endl;

    return 0;   
}