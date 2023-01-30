#include <iostream>

using std::boolalpha;
using std::cout;
using std::endl;
using std::size;

int main(int argc, char const *argv[]) {
    // int arr[] = {5, 4, 1, 78, 6};

    // for (int i = 0; i < size(arr); i++) {
    //   cout << arr[i] << endl;
    // }

    // cout << size(arr) << endl;

    // array copy
    // int arr2[size(arr)];
    // for (int i = 0; i < size(arr); i++) {
    //   arr2[i] = arr[i];
    // }

    // for (auto i : arr2) {
    //   cout << i << endl;
    // }

    // array compare
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    bool equal = true;
    for (int i = 0; i < size(arr1); i++) {
        if (arr1[i] != arr2[i] or size(arr1) != size(arr2)) {
            equal = false;
            break;
        }
    }

    cout << boolalpha << equal << endl;

    return 0;
}
