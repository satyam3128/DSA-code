#include<iostream>
using namespace std;
void reverse_part_of_array(int arr[] , int size , int start , int end){
    int i = start;
    int j = end;

    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){

    int arr[1000];
    int n;
    cout<<"Enter size of Array:";
    cin>>n;

    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    for(int i = 0;i< n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k ;
    cout<<"Enter key How mauch time you want to rotates:";
    cin>>k;
    if(k>n){
        k = k % n;
    }
    reverse_part_of_array(arr,n,0,n-k-1);
    reverse_part_of_array(arr,n,n-k,n-1);
    reverse_part_of_array(arr,n,0,n-1);
    cout<<"\nRotated Array \n";
    for(int i = 0;i< n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}