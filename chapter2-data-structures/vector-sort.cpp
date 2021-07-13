#include <bits/stdc++.h>
using namespace std;
int a[100];
int n;
struct Element{
    int id;
    int key;
};
bool cmp(Element& e1, Element& e2){
    //return e1.key < e2.key;
    return e1.key > e2.key;

}
vector<Element> e;

void sortWithStructure() {
    int n = 10;
    for(int i = 0; i < n; i++){
        Element ei;
        ei.id = i+1;
        ei.key = rand()%100;
        e.push_back(ei);
    }
    for(int i = 0; i < n; i++) cout << "(" << e[i].id << "," << e[i].key << ") "; cout << endl;

    sort(e.begin(),e.end(),cmp);

    cout << "After sorting" << endl;
    for(int i = 0; i < n; i++) cout << "(" << e[i].id << "," << e[i].key << ") "; cout << endl;
}

vector<int> ei;
bool cmpInt(int a, int b) {
    return a < b;
}

void sortWithInt() {
    int n = 10;
    for(int i = 0; i < n; i++){
        ei.push_back(rand()%100);
    }
    for(int i = 0; i < n; i++) cout << ei[i] << " ";
    cout << endl;

    sort(ei.begin(),ei.end(), cmpInt);
    // sort(ei.begin(),ei.end(), greater<int>());
    // sort(ei.begin(),ei.end(), less<int>());

    cout << "After sorting" << endl;
    for(int i = 0; i < n; i++) cout << ei[i] << " ";
    cout << endl;
}
int main(){
    cout << "==================>" << endl << endl;
    sortWithStructure();
    cout << endl << "<==================>" << endl << endl;
    sortWithInt();
    cout << endl << "<==================" << endl << endl;
}
