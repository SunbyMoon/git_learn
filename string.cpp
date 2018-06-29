#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "1234567890";
    for (int i=0, len=s.length(); i<len; i++) {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    s[5] = '5';
    cout<<s<<endl;
    return 0;
}
