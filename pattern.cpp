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

void pattern8(int n){
    for (int i = 0; i<n ; i++){
        for(int j = 0; j<i; j++){
            cout << " ";
        }
        for(int j = 0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
        for(int j = 0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
//FOr pattern 9 - call both pattern7 and pattern8.


void pattern10(int n) {
    for (int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i > n){
            stars = 2*n-i;
        }
        for(int j=1; j<=stars; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n){
    int start = 1;
    for (int i = 0; i<n; i++){
        if ( i % 2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n) {
    // int space = 2*(n-1);
    for (int i=1; i<=n ; i++) {
        //numbers
        for (int j=1 ; j<=i ; j++){
            cout << j;
        }
        //space
        for (int j=1; j<=2*(n-i); j++){
            cout << " ";
        }

        //numbers
        for (int j=i ; j>=1; j--){
            cout << j;
        }
        cout << endl;
        // space -= 2;
    }
}

void pattern13(int n) {
    int num = 1;
    for (int i=1; i<=n ; i++) {
        for (int j=1 ; j<=i ; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

void pattern14(int n) {
    for (int i=0; i<n ; i++) {
        for (char ch ='A' ; ch <= 'A' + i; ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n) {
    for (int i=0; i<n ; i++) {
        for (char ch ='A' ; ch <= 'A' + (n-i-1); ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'A' + i;
        for (int j = 0; j<=i; j++){
            cout << ch << " ";
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
        // pattern7(n);
        pattern16(n);
    }
    return 0;
}