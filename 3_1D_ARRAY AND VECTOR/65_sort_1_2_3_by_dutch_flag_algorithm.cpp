// 3 Pointer concept 
// sort 0 1 2 
#include <iostream>
using namespace std;
#include<vector>
void sort012(vector<int>& arr) {
        // code here
        
        int low = 0;
        int mid = 0;
        int high = arr.size()-1;

        while(mid<=high){
            if(arr[mid] == 2){
                swap(arr[mid],arr[high]);
                high--;
            }
            else if(arr[mid] == 0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else{
                mid++;
            }
        }
    }
    int main(){
        int n ;
        cout<<"Enter the size of Array:";
        cin>>n;
        vector<int>num(n);
        // Enter ZERO ONE two
        cout<<"\nEnter only 0 1 2's \n";
        for(int i  = 0;i<n ;i++){
            cin>>num[i];
        }
        for(int i = 0;i<n ;i++){
            cout<<num[i]<<" ";
        }

        cout<<"\nSorted array:\n";
        sort012(num);
        for(int i = 0;i<n ;i++){
            cout<<num[i]<<" ";
        }
        

        return 0;
    }