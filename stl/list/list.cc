#include <iostream>
#include <list>

using namespace std;

ostream& operator<<(ostream& stream, list<int> l) {
    for (int i : l) cout << i << " ";
    return stream;
}

int main(int argc, char const* argv[]) {
    list<int> l;

    list<int> l2(l);  // copy
    list<int> l3(5, 76);
    cout << l3 << '\n';

    l.push_back(1);
    l.push_back(65);
    l.push_back(45);
    l.push_back(21);
    l.push_front(9);

    cout << l << endl;

    l.erase(l.begin());
    cout << "After erase 1st position: " << l << endl;

    cout << "Size: " << l.size() << endl;
    return 0;
}
