#include<iostream>
#include <vector>

using namespace std;
string sort_vowel(string &sen){
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    // count upper and lower alphbet in word
    for(int i = 0;i<sen.size() ;i++){
        if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u'){
            lower[sen[i] - 'a']++;
            sen[i] = '#';
        }
        else if(sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U'){
            upper[sen[i] - 'A']++;
            sen[i] = '#';
        }
    }
    // store in other string
    string ans;
    for(int i = 0;i<26 ;i++){
        char ch = 'A' + i;
        while(upper[i]){
            ans = ans + ch;
            upper[i]--;
        }
    }

    for(int i = 0 ;i<26 ;i++){
        char ch = 'a' + i;
        while(lower[i]){
            ans = ans + ch ;
            lower[i]--;
        }
    }

    int first = 0;
    int second = 0;
    while(second < ans.size()){
        if(sen[first] == '#'){
            sen[first] = ans[second];
            second++;
        }
        first++;
    }
    return sen;
}
int main(){

    string s;
    cout<<"Enter the word:";
    getline(cin,s);

    cout<<"\nAfter sorting the Vowel:\n";


    cout<<sort_vowel(s);



    return 0;
}