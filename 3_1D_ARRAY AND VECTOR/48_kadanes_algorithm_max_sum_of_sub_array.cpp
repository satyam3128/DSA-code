#include<iostream>
#include<vector>
using namespace std;
int kadanes_alogorith(int arr[] , int n){
    int prefix = 0 ;
    int maximum = INT16_MIN;
    for(int i = 0 ;i<n ;i++){
        if(prefix < 0 ){
            prefix = 0;
        }
        prefix +=arr[i];
        
        maximum = max(prefix ,  maximum);
    }
    return maximum;
    
}
int main(){
    int arr[8] = {3,4,-5,8,-12,7,6,-2};
    cout<<kadanes_alogorith(arr,8);
    return 0;
}