#include <iostream>
using namespace std;
class customer{
    
    string name;
    int *data;

    public:

    customer(){
        name = "Rohit";
        data = new int;
        *data = 10;
        cout<<"Constructor";
    }

    ~customer(){
        delete data;
    }

    
    
    

   
};
int main(){

    customer obj;
    
    return 0;
}