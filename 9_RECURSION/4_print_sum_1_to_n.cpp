#include <iostream>
using namespace std;
int sum_natural(int num){
    if(num == 0) return 0;
    int sum = num + sum_natural(num-1);
    return sum;

}
int main(){
    int n;
    cout<<"Enter num:";
    cin>>n;
    cout<<sum_natural(n);

    return 0;
}