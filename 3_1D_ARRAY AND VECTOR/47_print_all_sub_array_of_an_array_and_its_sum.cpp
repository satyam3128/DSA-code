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
void print_sub_array_sum(vector<int>v){
    int n = v.size();
    for(int start = 0;start<n ;start++){
        for(int end = start ; end<n ;end++){
            cout<<"{ ";
            int current_sum = 0;
            for(int i = start ; i<=end ;i++){
                current_sum +=v[i];
            }
            cout<<current_sum;
            cout<<" }";
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
    cout<<"\nALL SUB ARRAY SUM:\n";
    print_sub_array_sum(v);
    

    return 0;
}