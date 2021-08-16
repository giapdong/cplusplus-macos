
#include <bits/stdc++.h>
using namespace std;

// x[1] + x[2] + x[k] + ... + x[n] = M voi x[k] = k
int x[100];
int n, M;
int T;
int cnt;

// Liet ke xau nhi phan
bool check(int v, int k) {
    if(k < n) return true;
    return T + v == M;
}

void solution() {
    cnt++;
    cout << cnt << ": ";
    for(int i = 1; i <= n; i++) cout << x[i];
    cout << endl;
}

void Try(int k) {
    for(int v = 1; v <= n; v++) {
        if(check(v, k)) {
            x[k] = v;
            T = T + v;
            if(k == n) solution();
            else Try(k+1);
            T = T - v;
        }

    }
}

int main() {
    cnt = 0;
    n = 3;
    M = 5;
    Try(1);
}