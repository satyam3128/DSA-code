#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream fout;
    fout.open("love.txt");
    fout<<"Love INDIA\n";
    fout<<"FRIEND RUSSIA";

    fout.close();

    ifstream fin;
    fin.open("love.txt");
    
    string line ;
    while(getline(fin,line)){
        cout<<line<<endl;
    }

    fin.close();

    return 0;
}