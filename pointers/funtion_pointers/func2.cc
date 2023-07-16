#include <iostream>
#include <vector>

using namespace std;

void for_each_operation(vector<int>& vct, void (*func)(int&)) {
    for (int i : vct) {
        func(i);
    }
}

void print(int& i) {
    cout << i << endl;
}

void print_hello_nums(int i) {
    cout << "Hello: " << i << endl;
}

int main() {
    // vector<int> vct = {1, 4, 2, 5, 7};

    // for_each_operation(vct, print);

    typedef void (*func_ptr)(int);
    func_ptr ptr = print_hello_nums;

    ptr(5);
}