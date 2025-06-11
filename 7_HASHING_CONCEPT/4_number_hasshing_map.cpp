#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>v[i];
    }
    map<int,int>mpp;
    for(int i = 0;i<n ;i++){
        mpp[v[i]]++;
    }
    int q;
    cout << "Enter the element to check frequency: ";
    cin >> q;
    
    cout << "Frequency of " << q << " is: " << mpp[q] << endl;



    return 0;
}