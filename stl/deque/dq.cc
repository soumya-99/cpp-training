#include <deque>
#include <iostream>

using namespace std;

ostream& operator<<(ostream& stream, deque<int> d) {
    for (int i : d) cout << i << " ";
    return stream;
}

int main(int argc, char const* argv[]) {
    deque<int> d;

    d.push_back(25);
    d.push_back(28);
    d.push_back(13);
    d.push_back(22);
    d.push_front(98);

    cout << d << endl;

    d.pop_back();
    cout << d << endl;

    // d.pop_front();
    // cout << d;

    cout << d.empty() << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase 1st elem: " << d << endl;

    // d.clear(); // all elems deleted

    return 0;
}
