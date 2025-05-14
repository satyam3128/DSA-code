#include<iostream>
#include<vector>
using namespace std;
void print_sub_array(vector<int>v){
    int n = v.size();
    for(int start = 0;start<n ;start++){
        for(int end = start ; end<n ;end++){
            cout<<"{ ";
            for(int i = start ; i<=end ;i++){
                cout<<v[i]<<" ";
            }
            cout<<"}";
            if(end != n-1)
            cout<<" , ";
        }
        cout<<endl;
    }
}
int main(){
    int n ;
    cout<<"Enter the Size of Array:";
    cin>>n;

    vector<int>v(n);
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>v[i];
    }
    cout<<"\nALL SUB ARRAY:\n";
    print_sub_array(v);
    

    return 0;
}