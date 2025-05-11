#include<iostream>
#include<vector>
using namespace std;
void Array_duplicate(int arr[] , int n){
    vector<int>v;

     for(int i  = 0 ;i<n ;i++){
            int num = arr[i];
            int flag = 0;
            for(int j = i+1 ;j<n ;j++){
                if(arr[j] == num){
                    flag = 1;
                }
            }
            if(flag == 1){
                v.push_back(num);
            }
        }
        for(int i = 0 ; i<v.size() ;i++){
            cout<<v[i]<<" ";
        }
}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter size of Array:";
    cin>>n;
    for(int i = 0;i< n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<endl<<"Duplicate Element :\n";
    Array_duplicate(arr,n);

    


}