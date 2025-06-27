#include<iostream>
using namespace std;
void print(int arr[], int index , int n){
    if(index == n){
        return;
    }
    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}
int main(){
    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"Enter "<<i<<" elemnt: ";
        cin>>arr[i];
    }
    cout<<endl;
    print(arr,0,n);

    return 0;
}