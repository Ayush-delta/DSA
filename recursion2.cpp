#include<bits/stdc++.h>
using namespace std;

// void printName(int i, int n) {
//     if(i<1) return;
//     cout << i << endl;
//     printName(i-1, n);

// }

// int main() {
//     int n, i;
//     cin >> n;
//     printName(n, n);
//     return 0;
// }

void backtrack(int i, int n) {
    if(i>n) return;
    backtrack(i+1, n);
    cout << i << endl;
}

int main () {
    int i,n;
    cin >> n;
    backtrack(1,n);

    return 0;
}