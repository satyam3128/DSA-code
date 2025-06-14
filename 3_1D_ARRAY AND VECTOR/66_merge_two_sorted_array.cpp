#include <iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i = 0 ;i<v.size() ;i++){
        cout<<v[i]<<" ";
    }
}
int main(){

    int n1,n2;
    cout<<"Enter size of First Array:";
    cin>>n1;
    cout<<"Enter size of Second Array:";
    cin>>n2;
    vector<int>arr1(n1);
    vector<int>arr2(n2);
    
    cout<<"\nEnter the first sorted Arrays:-\n";
    for(int i = 0;i<n1 ;i++){
        cout<<"Enter the "<<i<<" element:";
        cin>>arr1[i];
    }
    cout<<"\nEnter the Second sorted Arrays:-\n";
    for(int i = 0;i<n2 ;i++){
        cout<<"Enter the "<<i<<" element:";
        cin>>arr2[i];
    }
    cout<<"Arr1[]:";

    display(arr1);
    cout<<"\nArr2[]:";
    display(arr2);

    
    int i  = 0;
    int j = 0 ;
    int k = 0;

    vector<int>ans(n1+n2);
    while(i<n1 && i<n2){
        if( arr1[i] <arr2[j]){
            ans[k] = arr1[i];
            i++;
            
        }
        else{
            ans[k] = arr2[j];
            j++;
            
        }
        k++;

    }

    // for remaing element
    // array 1 ke sare element aa chuke hai 
    // to ab 2 ke sare element dal do 
    if(i<=n1){
        while(j<=n2-1){
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }

    // Array 2 ke sare element aa chuke hai 
    // to ab 1 ke sare element dal do
    else{
        while(i<=n1-1){
            ans[k] = arr1[i];
            j++;
            k++;
        }
    }


    cout<<"\nMerged Sorted Array[]:";
    display(ans);


    
    

    return 0;
}