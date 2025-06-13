#include <iostream>
using namespace std;
#include<vector>
void sort012(vector<int>& arr) {
        // code here
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;
        for(int i = 0;i<arr.size();i++){
            if(arr[i] == 0) count_0++;
            else if(arr[i] == 1) count_1++;
            else count_2++;
            
            
        }
        
        for(int i = 0;i<arr.size() ;i++){
            if(i<count_0){
                arr[i] = 0;
            }
            else if(i>=count_0 && i<count_0+count_1){
                arr[i] = 1;
            }
            else{
                arr[i] = 2;
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