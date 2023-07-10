#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

// Inp: a, b, c, 1, 2, 3
// Out: a, 1, b, 2, c, 3

ostream& operator<<(ostream& o, list<char>& ll) {
    cout << "[";
    for (char i : ll)
        o << i << ", ";
    cout << "\b\b]";
    return o;
}

list<char>& couple(list<char>& l_chars, list<int>& l_nums) {
    
}

int main() {
    list<char> list_of_chars = {'a', 'b', 'c'};
    list<int> list_of_nums = {1, 2, 3};

    list<char> received_list = couple(list_of_chars, list_of_nums);



    cout << received_list;
    return 0;
}
