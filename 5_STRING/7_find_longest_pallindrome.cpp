#include <iostream>
using namespace std;
#include <vector>
int longest_pallindrome(string str){
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i = 0;i<str.size() ;i++){
        if(str[i] >= 'a'){
            lower[str[i] - 'a']++;
        }
        else{
            upper[str[i]-'A']++;
        }
    }
    int count =0;
    bool odd_number_char_rem = 0;
    for(int i = 0;i<26 ;i++){
        if(lower[i] % 2 ==0){
            count +=lower[i];
        }
        else{
            count +=lower[i]-1;
            odd_number_char_rem =1;
        }
        
        if(upper[i] % 2 ==0){
            count +=upper[i];
        }
        else{
            count +=upper[i]-1;
            odd_number_char_rem =1;
        }
    }
    return count + odd_number_char_rem;
}

int main(){
    string s;
    cout<<"Enter the string :";
    getline(cin,s);

    cout<<"\nstring:"<<s;
    cout<<"\nLongest pallindrome possible:"<<longest_pallindrome(s);



    

    return 0;
}