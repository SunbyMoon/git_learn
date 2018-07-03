#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void save_to_file() {
    ofstream outfile("inheritance.cpp");
    if(!outfile) {
        cerr<<"open inheritance.cpp error!"<<endl;
        exit(1);
    }
    char c[80];
    cin.getline(c, 80);
    for(int i=0; c[i]!=0; i++) 
        if(c[i]>=65 && c[i]<=90 ||c[i]>=97 && c[i]<=122) {
            outfile.put(c[i]);
            cout<<c[i];
        }
        cout<<endl;
        outfile.close();
}

void get_from_file() {
    char ch;
    ifstream infile("inheritance.cpp", ios::in);
    if(!infile) {
        cerr<<"open inheritance.cpp error!"<<endl;
        exit(1);
    }
    ofstream outfile("test.cpp");
    if(!outfile) {
        cerr<<"open test.cpp error!"<<endl;
        exit(1);
    }
    while(infile.get(ch)) {
        if(ch>=97 && ch<=122) {
            ch = ch - 32;
            outfile.put(ch);
            cout<<ch;
        }
    }
    cout<<endl;
    infile.close();
    outfile.close();
}

int main() {
    save_to_file();
    get_from_file();
    return 0;
}





