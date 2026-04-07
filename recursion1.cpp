#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print(int n) {
    if(cnt == n) return;
    cout << cnt << endl;
    cnt ++;
    print(n);
}

int main() {
    int n;
    cin >> n;
    print(n);

    return 0;
}

//using backtracking 

// void backtrack(int n, int i) {
//     if (i<1) return;

//     backtrack(n, i-1);
//     cout << i << endl;
// }

// int main() {
//     int n;
//     cin >> n;
//     backtrack(n, n);

//     return 0;
// }