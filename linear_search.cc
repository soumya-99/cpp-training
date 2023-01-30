#include <iostream>

using std::cout;
using std::endl;
using std::size;

int linear_search(int arr[], size_t size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[]) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    int index = linear_search(arr, size(arr), key);
    if (index == -1) {
        cout << "Key not found" << endl;
    } else {
        cout << "Key found at index " << index << endl;
    }
    return 0;
}
