#include<iostream>
using namespace std;
void print_sub_array(int arr[] , int n){
    for(int i = 0;i<n ;i++){
        for(int j = 0;j<n-i ;j++){
            cout<<" { ";
            for(int k = j ;k<=i+j ;k++){
                cout<<arr[k]<<" ";
            }
            cout<<" } ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i< n;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<endl<<" SUB ARRAYS:-\n";
    print_sub_array(arr,n);

    return 0;
}