#include<iostream>
using namespace std;
//pass by value
// void doSomething(string s) {
//     s[0] = 't';
//     cout << s << endl;
// }
// int main() {
//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;

//     return 0;
// }


// pass by reference 

void doSomething(string &s) { // original value is passed
    s[0] = 't'; // modifies the original variable
    cout << s << endl;
}

int main() {
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}

