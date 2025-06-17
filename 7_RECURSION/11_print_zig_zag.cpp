// I/P       O/P
// 1         111
// 2         211121112
// 3         321112111232111211123
// 4         432111211123211121112343211121112321112111234
#include<iostream>
using namespace std;
void zig_zag(int n){

    if(n==0) return ;
    cout<<n;
    zig_zag(n-1);
    cout<<n;
    zig_zag(n-1);
    cout<<n;
}
int main(){
    int n ;
    cout<<"Enter the n:";
    cin>>n;
    zig_zag(n);

    return 0;
}