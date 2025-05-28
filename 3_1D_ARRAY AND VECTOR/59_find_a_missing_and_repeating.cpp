#include <iostream>
using namespace std;
int repeating(int arr[] , int n ){
    for(int i = 1 ;i<=n ;i++){
        int count = 0;
        for(int j = 0 ;j<n ;j++){
            if(i == arr[j]){
                count++;
            }
        }
        if(count>=2) return i;
    }
    return -1;
}
int missing(int arr[] , int n){
    for(int i = 1 ;i<=n ;i++){
        bool flag = 0;
        for(int j = 0 ;j<n ;j++){
            if(i == arr[j]) {
                flag =1 ;
                break;
            }

        }
        if(flag == 0) return i;
        
    }
    return 0;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i< n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"Array[]:";
    for(int i = 0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"repeating number:"<<repeating(arr,n)<<endl;
    cout<<"Missing number:"<<missing(arr,n)<<endl;

    return 0;
}