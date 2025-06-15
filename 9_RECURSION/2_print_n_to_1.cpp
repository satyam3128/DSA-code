#include <iostream>
using namespace std;
void print_natural(int n){
    if(n==0) return;
    cout<<n<<" ";
    return print_natural(n-1);
}
int main(){
    int num ;
    cout<<"Enter the nth:";
    cin>>num;

    print_natural(num);


    return 0;
}