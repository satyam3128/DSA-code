#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>factorial(int n ){
    vector<int>ans(1,1);
    while(n>1){
        int carry = 0 ;
        int size = ans.size();
        int res;
        for(int i = 0;i<size ;i++){
            res = ans[i] * n + carry ;
            carry = res /10;
            ans[i] = res%10;

        }
        while(carry){
            ans.push_back(carry % 10 );
            carry /=10;
        }
        n--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    
    int n ;
    cout<<"Enter the number:";
    cin>>n;

    vector<int>fac = factorial(n);
    for(int i = 0;i<fac.size() ;i++){
        cout<<fac[i];
        
    }

    return 0;
}