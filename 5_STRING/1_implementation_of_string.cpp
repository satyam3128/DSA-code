#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    char ch1[] = {'A','P','P','L','E'};
    for(int i = 0;i<5 ;i++){
        cout<<ch1[i];
    }
    char ch[10];
    cout<<"\nEnter name:";
    cin>>ch;
    cout<<ch;
    cout<<endl;
    string s = "SATYAM";
    cout<<s;

    string s2;
    cout<<"\nEnter the name:";
    cin>>s2;
    s2.push_back('p');
    cout<<endl<<s2;
    cin.ignore();

    string s3;
    cout<<"\nEnter the sentence:\n";
    getline(cin,s3);
    cout<<s3;

    cout<<endl;
    string s4 = "satyam is a \"hard working\" student ";
    cout<<s4;
    

    


    return 0;
}