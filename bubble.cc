#include <iostream>

using std::cout;
using std::endl;
using std::size;

void bubble(int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {98, 99, 45, 37, 55};
    bubble(arr, size(arr));

    for (int i = 0; i < size(arr); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
