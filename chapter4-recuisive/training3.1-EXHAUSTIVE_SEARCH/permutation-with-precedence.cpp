#include <bits/stdc++.h>
using namespace std;

int n, K, cnt = 0;
int x[100];
bool visited[100];
vector< vector<int> > matrix;

bool check(int v, int k) {
    return !visited[v];
}

bool isValid() {
    for (int i = 0; i < K; i++)
    {
        int a = matrix[i][0];
        int b = matrix[i][1];
        int aIndex = 0;
        int bIndex = 0;

        for(int v = 1; v <= n; v++) {
            if(x[v] == a) aIndex = v;
            if(x[v] == b) bIndex = v;
        }
        if(aIndex > bIndex) return false;
    }
    
    return true;
}

void solution() {
    if(isValid()) {
        cnt++;
        for(int v = 1; v <= n; v++) cout << x[v] << " ";
        cout << endl;
    }
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

void input() {
    freopen("input1.tsp", "r", stdin);
    cin >> n >> K;
    for (int i = 0; i < K; i++)
    {
        vector<int> v;
        int a, b;
        cin >> a >> b;
        v.push_back(a);
        v.push_back(b);
        matrix.push_back(v);
    }
    // Validate input
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     cout << "Line " << i << " : ";
    //     for (int j = 0; j < matrix[i].size(); j++) cout << matrix[i][j] << " ";
    //     cout << endl;
    // }
}

int main() {
    input();
    Try(1);
}
