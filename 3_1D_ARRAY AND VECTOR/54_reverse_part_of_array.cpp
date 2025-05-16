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
    int n , a,b ;
    cout<<"Enter size of Array:";
    cin>>n;

    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"\nNow,Enter the range of Index to reverse of Array:-\n";
    cout<<"Enter the intial Index:";
    cin>>a;
    cout<<"Enter the last Index:";
    cin>>b;


    for(int i = 0;i< n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse_part_of_array(arr,n,a,b);
    cout<<"Reversed Array from "<<a<<" to "<<b<<" index:-\n";
    for(int i = 0;i< n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}