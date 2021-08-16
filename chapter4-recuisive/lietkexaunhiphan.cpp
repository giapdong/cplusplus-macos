#include <bits/stdc++.h>
using namespace std;

int n;
int x[100];
int cnt;

// Liet ke xau nhi phan
bool check(int v, int k) {
    return true;
}

// Liet ke xau nhi phan khong co 2 bit 1 canh nhau
bool check1(int v, int k) {
    if(k == 1) return true;
    return x[k-1] + v <= 1;
}

void solution() {
    cnt++;
    cout << cnt << ": ";
    for(int i = 1; i <= n; i++) cout << x[i];
    cout << endl;
}

void Try(int k) {
    for(int v = 0; v <= 1; v++) {
        if(check1(v, k)) {
            x[k] = v;
            if(k == n) solution();
            else Try(k+1);
        }

    }
}

int main() {
    cnt = 0;
    n = 15;
    Try(1);
}