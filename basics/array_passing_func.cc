#include <iostream>

using std::cout;
using std::endl;
using std::size;

void print_numbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    print_numbers(arr, size(arr));
    return 0;
}
