#include <iostream>
using namespace std;
class complex{

    int real;
    int imag;

    public:

    complex(){
        
    }
    complex(int real , int imag){
        this->real = real;
        this->imag = imag;
    }

    void display(){
        cout<<real<<" "<<"+ "<<imag<<"i";
    }

    complex operator +(complex &c){

    complex ans;
    ans.real = real + c.real;
    ans.imag = imag + c.imag;
    return ans;
    }


};
int main(){
    complex c1(2,3);
    complex c2(4,6);

    complex  c3 = c1 + c2;
    c3.display();

    return 0;
}