#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::ostream;

ostream& operator<<(ostream& os, vector<int> arr) {
    os << "[";
    for (int i : arr) {
        os << i << " ";
    }
    os << "\b]";
    return os;
}

int binary_search(vector<int> arr, int key) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // key not found

    // Recursive implementation

    // if (low > high) {
    //     return -1;
    // }
    // int mid = (low + high) / 2;
    // if (arr[mid] == key) {
    //     return mid;
    // } else if (arr[mid] < key) {
    //     return binary_search(arr, mid + 1, high, key);
    // } else {
    //     return binary_search(arr, low, mid - 1, key);
    // }
}

int main(int argc, char const* argv[]) {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    cout << "Array: " << arr << endl;

    int key = 5;
    cout << "Key: " << key << endl;

    int index = binary_search(arr, key);
    if (index == -1) {
        cout << "Key not found" << endl;
    } else {
        cout << "Key found at index: " << index << endl;
    }
    return 0;
}
