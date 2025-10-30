#include <iostream>
#include <string>
#include <vector>
#include "header.h"
using namespace std;
int main() {
    cout << "----------------------------------------" << endl;
    int i = 0;
    cin >> i;
    vector<Human> k;
    cout << "----------------------------------------" << endl;
    for (int j = 0; j < i; j++) {
        int a = 0;
        double b = 0;
        string n = "";
        bool h = false;
        cin >> a >> b >> n >> h;
        Human r(a, b, n, h);
        k.push_back(r);
        cout << "----------------------------------------" << endl;
    };
    cout << "----------------------------------------" << endl;
    for (int j = 0; j < i; j++) {
        k[j].dates();
        cout << "----------------------------------------" << endl;
    };
    return 0;
}