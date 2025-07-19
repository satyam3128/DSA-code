#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // file open 
    ofstream fout;
    fout.open("zoom.txt");

    // write
    fout<<"Hello India";

    fout.close();
    return 0;
}