#include<iostream>
using namespace std;
void segregate_zero_one(int arr[] , int n){
    int count_zero = 0;
    int count_one = 0;
    for(int i = 0;i<n ;i++){
       if(arr[i] == 0){
        count_zero++;
       }
       else if(arr[i] == 1){
        count_one++;
       }
    }
    for(int i = 0;i<n ;i++){
        
        if(i<count_zero){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }

}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<endl;
    for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    segregate_zero_one(arr,n);

    cout<<endl;
    for(int i = 0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }

    

    return 0;
}