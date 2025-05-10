#include<iostream>
using namespace std;
int Kth_missing_element_in_array(int arr[] , int n , int kth){
    int start = 0 ;
    int end = n-1 ;
    int mid , ans = n ;
    while(start<=end){

        mid = start+(end - start)/2;
        if(arr[mid] - mid - 1 >=kth){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid +1;
        }
        
    }
    return ans + kth;
}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the Size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element Of Array:";
        cin>>arr[i];
    }
    cout<<"\nArray:-\n";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int kth;
    cout<<"Enter the kth Missing value that you want to know:";
    cin>>kth;
    cout<<endl;
    cout<<kth<<" Missing Element is :"<<Kth_missing_element_in_array(arr,n,kth);



    return 0;
}