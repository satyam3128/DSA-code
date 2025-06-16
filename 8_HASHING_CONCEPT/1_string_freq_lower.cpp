#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter the  lower letter string:";
    getline(cin,s);

    // frequency store
    vector<int>hashh(26,0);
    for(int i = 0;i<s.size();i++){
        hashh[s[i] - 'a']++;
    }

    char ch;
    cout<<"Enter the small letter char:";
    cin>>ch;

    cout<<"Frequency:";
    for(int i = 0;i<hashh.size();i++){
        if(i + 'a' == ch){
            cout<<hashh[i];
        }
    }
    return 0;
}