#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> KEYBOARD;
vector<string> paragraph;

void input() {
    freopen("input.tsp", "r", stdin);
    cin >> n;
    string t;
    getline(cin, t);
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        paragraph.push_back(s);
    }
    
}

int findIndexByCharacter(char c) {
    for (int i = 0; i < KEYBOARD.size(); i++)
    {
        int found = KEYBOARD[i].find(c);
        if (found != -1) return found + 1;
    }
    return -1;
}

void process() {
    for (int i = 0; i < paragraph.size(); i++)
    {
        int cnt = 0;
        cout << "Begin: " << endl;
        string p = paragraph[i];
        for (int j = 0; j < p.size(); j++)
        {
            if(p[j] == ' ') {
                cnt ++;
            }
            else {
                int foundIndex = findIndexByCharacter(p[j]);
                cnt += foundIndex;
            }
        }
        cout << "CNT: " << cnt << endl;
    }
    
}

int main() {
    KEYBOARD.push_back("abc");
    KEYBOARD.push_back("def");
    KEYBOARD.push_back("ghi");
    KEYBOARD.push_back("jkl");
    KEYBOARD.push_back("mno");
    KEYBOARD.push_back("pqrs");
    KEYBOARD.push_back("tuv");
    KEYBOARD.push_back("wxyz");

    input();
    process();
    return 0;
}