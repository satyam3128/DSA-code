#include<iostream>
using namespace std;
int Kth_missing_element_in_array(int arr[] , int n , int kth_missing){
    int count_num = 0;
    for(int i = 1; ; i++){
        bool flag = 0;
        for(int j = 0 ;j<n ;j++){
            if(arr[j] == i){
                flag =1;
                break;
            }
        }
        if(flag == 0){
            count_num++;
            if(count_num == kth_missing){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the Size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"\n Array:-\n";
    for(int j = 0;j<n ;j++){
        cout<<arr[j]<<" ";
    }
    int kth;
    cout<<"\nEnter the Kth missing  in array:";
    cin>>kth;
    
    cout<<endl<<kth<<" Missing Element in Array is : "<<Kth_missing_element_in_array(arr,n,kth);


    return 0;
}