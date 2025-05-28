#include <iostream>
using namespace std;
int main(){
    string address;
    cout<<"Enter IP address:";
    cin>>address;

    string ans;
    int index = 0;
    while (index < address.size()){
        if(address[index] == '.'){
            ans = ans + "[.]";
        }
        else{
            ans = ans + address[index];
        }
        index++;
    }
    cout<<"\nDefanging IP Address:";
    cout<<ans;

    return 0;
}