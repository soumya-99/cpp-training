#include <iostream>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& os, int arr[]) {
    int size = sizeof((int*)arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        os << arr[i];
        if (i != size - 1) {
            os << ", ";
        }
    }
    return os;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {10, 5, 15, 12, 90, 80};
    qsort(arr, size(arr), sizeof(int), compare);

    // ranges::sort(arr); // C++20

    cout << "Sorted array: " << arr << endl;

    return 0;
}