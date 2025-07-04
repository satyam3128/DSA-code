#include <iostream>
using namespace std;
void print(int arr[], int index){
    if(index == -1){
        return ;
    }
    
    cout<<arr[index]<<" ";
    print(arr,index-1);
    
}
int main(){
    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter Element:";
        cin>>arr[i];
    }
    cout<<endl;
    print(arr,n-1);
    

    return 0;
}