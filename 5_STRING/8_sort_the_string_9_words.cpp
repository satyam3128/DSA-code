#include <iostream>
#include <vector>
using namespace std;

string sentence_form(string &sen){
    vector<string>ans(10);
    int count = 0;
    int index = 0;
    string temp;

    while(index<sen.size()){
        if(sen[index] == ' '){
            int pos = temp[temp.size()-1] - '0';
            temp.pop_back();
            ans [pos] = temp;
            temp.clear();
            count++;

        }else{
            temp += sen[index];
        }
        index++;
    }
    int pos = temp[temp.size()-1]-'0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    for(int i =1 ; i<=count;i++){
        temp = temp + ans[i];
        temp = temp + ' ';
    }
    temp.pop_back();

    return temp;
}



int main(){

    string sen;
    cout<<"Enter the Unressemble words:";
    getline(cin,sen);

    cout<<"Ressembled words and a complete sentence:";
    cout<<sentence_form(sen);



    return 0;
}