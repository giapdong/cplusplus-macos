#include <bits/stdc++.h>
using namespace std;

int n;
int x[100];
bool visited[100];

bool check(int v, int k) {
    return !visited[v];
}

void solution() {
    for(int v = 1; v <= n; v++) cout << x[v];
    cout << endl;
}

void Try(int k) {
    for(int v = 1; v <= n; v++) {
        if(check(v, k)) {
            x[v] = k;
            visited[v] = true;
            if(k == n) solution();
            else Try(k + 1);
            visited[v] = false;
        }
    }
}

int main() {
    n = 3;
    for(int i = 1; i <= n; i++) visited[i] = false;
    Try(1);
}