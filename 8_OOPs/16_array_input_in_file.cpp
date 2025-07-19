#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
int main(){

    int arr[100];
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"\nEnter the Array:\n";
    for(int i = 0;i<n ;i++){
        cin>>arr[i];
    }
    
    ofstream fout;
    fout.open("Zero_sort.txt");
    fout<<"\nOriginal Array:\n";
    for(int i = 0;i<n ;i++){
        fout<<arr[i]<<" ";
    }
    
    sort(arr,arr+n);

    fout<<"\nSorted Array:\n";

    for(int i = 0;i<n ;i++){
        fout<<arr[i]<<" ";
    }

    fout.close();


    return 0;
}