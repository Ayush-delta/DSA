#include <iostream>
using namespace std;

void printPatterns(int n) {
    for(int i =0; i<n; i++) {
        for (int j=0; j<n ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern2(int n) {
    for (int i=0; i<=n; ++i) {
        for(int j = 0; j<i; ++j) {
            cout << "* " ;
        }
        cout << endl;
    }
}

void printPattern3(int n) {
    for (int i=1; i<=n ; i++) {
        for (int j=1 ; j<=i ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


void printPattern4(int n) {
    for (int i=1; i<=n ; i++) {
        for (int j=1 ; j<=i ; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void printPattern5(int n) {
    for (int i=1; i<=n; i++) {
        for(int j = 0; j<n-i+1; j++) {
            cout << "* " ;
        }
        cout << endl;
    }
}

void printPattern6(int n) {
    for (int i=1; i<=n; i++) {
        for(int j = 1; j<=n-i+1; j++) {
            cout << j << " " ;
        }
        cout << endl;
    }
}

void pattern7(int n){
    for (int i = 0; i<n ; i++){
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j<2*i+1; j++){
            cout << "*";
        }
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern7(n);
    }
    return 0;
}