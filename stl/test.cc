#include <bits/stdc++.h>

using namespace std;

ostream& operator<<(ostream& os, const pair<int, int>& p) {
    return os << "<" << p.first << ", " << p.second << ">";
}

int main() {
    pair<int, int> p = {1, 2};
    cout << p << endl;

    map<int, int> m;
    m[1] = 2;
    m[3] = 4;
    for (auto& p : m) {
        cout << p << endl;
    }

    vector<int> v = {1, 2, 3};
    v.push_back(54);
    v.push_back(69);
    v.pop_back();
    for (auto& x : v) {
        cout << x << endl;
    }

    return 0;
}
