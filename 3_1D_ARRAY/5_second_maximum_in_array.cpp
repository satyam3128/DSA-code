#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[1000];
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<<" element :";
        cin>>arr[i];
    }
    cout<<"Array:";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max1 = INT16_MIN;
    int max2 = INT16_MIN;

    for(int i = 0;i<n ;i++){
        if(arr[i]>max1){
            max1 = arr[i];
        }
    }
    for(int i = 0;i<n ;i++){
        if(arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }
    cout<<"Second Maximum :"<<max2;
    
    return 0;
}