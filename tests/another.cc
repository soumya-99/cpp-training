#include <bits/stdc++.h>

using namespace std;

ostream& operator<<(ostream& os, const vector<int>& v) {
    for (auto i : v) {
        os << i << " ";
    }
    return os;
}

int main(int argc, char const* argv[]) {
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v << endl;

    return 0;
}
