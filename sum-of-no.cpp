#include<bits/stdc++.h>
using namespace std;

// int sumofNum(int n) {
//     if(n == 0) return 0;
//     return n + sumofNum(n-1);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << sumofNum(n);
//     return 0;
// }

// parameterize
int sum = 0;
int sumofNum(int i, int sum) {
    if(i<1) {
        cout << sum;
        return 0;
    }
    sumofNum(i-1, sum+i);
}

int main () {
    int n;
    cin >> n;
    sumofNum(n, 0);

    return 0;
}