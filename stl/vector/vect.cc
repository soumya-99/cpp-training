#include <iostream>
#include <vector>

using namespace std;

ostream& operator<<(ostream& stream, vector<int> vect) {
    for (int v : vect) {
        cout << v << " ";
    }
    return stream;
}

int main(int argc, char const* argv[]) {
    vector<int> vect;

    // Initializing techniques
    vector<int> vect1(5, 1);
    cout << vect1 << endl;

    // Copying a vector into another
    vector<int> last(vect1);
    cout << last << endl;

    cout << "Capacity: " << vect.capacity() << endl;

    vect.push_back(1);
    cout << "Capacity: " << vect.capacity() << endl;

    vect.push_back(2);
    cout << "Capacity: " << vect.capacity() << endl;

    vect.push_back(6);
    cout << "Capacity: " << vect.capacity() << endl;

    cout << "Size: " << vect.size() << endl;

    cout << "Element 2nd index: " << vect.at(2) << endl;

    cout << "Front: " << vect.front() << endl;
    cout << "Back: " << vect.back() << endl;

    cout << vect << endl;

    vect.pop_back();
    cout << vect << endl;

    vect.clear();  // size becomes 0 but capacity don't clear

    return 0;
}
