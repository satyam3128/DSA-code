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
    int sum = 0 ;

    for(int i = 0;i<size ;i++){
        sum += arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"SUM of All Element :"<<sum;
    

    return 0;   
}