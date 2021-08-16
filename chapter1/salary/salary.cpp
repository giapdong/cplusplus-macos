#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int> > matrix;

void output() {
    for (int i = 0; i < matrix.size(); i++)
    {
        cout << matrix[i][1] << endl;
    }
}

void process() {
    for (int i = 0; i < matrix.size(); i++)
    {
        sort(matrix[i].begin(),matrix[i].end(), greater<int>());
    }
}

void input() {
    freopen("input.tsp", "r", stdin);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        int a, b, c;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
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
    process();
    output();
    return 0;
}