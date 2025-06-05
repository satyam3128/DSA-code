#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];

    }

    cout<<"\nArray[]:";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int j = -1;
    for(int i = 0;i<n ;i++){
        if(arr[i] == 0 ){
        j=i;
        break;}
    }
    if(j==-1) {
        cout<<"Not Zero Found :";
        return 0;
    }
    
    for(int i = j+1; i<n ;i++){
        if(arr[i] != 0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    cout<<"Array after moving all zero to end:\n";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}