#include<iostream>
using namespace std;
void swap(int *a , int *b){
    int temp  = *a;
    *a = *b ; 
    *b = temp;
}
void reverse_array(int arr[] , int size){
    int i = 0 ;
    int j = size -1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}

int main(){
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[1000];
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<<" element :";
        cin>>arr[i];
    }
    cout<<"Array:";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Array after Reverse:"<<endl;
    reverse_array(arr , n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}