// pangram means all 26 small alphabet is present or not 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter the sentence:";
    getline(cin,s);

    vector<bool>alphbet(26,0);
    for(int i = 0;i<s.size() ;i++){
        if(s[i] == ' '){
            continue;
        }
        if(s[i] >= 65 && s[i]<=90){
            continue;
        }
        alphbet[s[i]-'a'] = 1;
    }
    for(int i = 0;i<26 ;i++){
        if(alphbet[i] == 0) {
            cout<<"Not a pangram";
            return 0;
        }
    }
    cout<<"Sentence is pangram";
    return 0;

}
