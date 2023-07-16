#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& os, vector<int>& v) {
    os << "[";
    for (int i = 0; i < v.size(); i++) {
        os << v[i];
        if (i != v.size() - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

void merge(vector<int>& v, int l, int m, int r) {
    vector<int> left(v.begin() + l, v.begin() + m + 1);
    vector<int> right(v.begin() + m + 1, v.begin() + r + 1);

    int i = 0, j = 0, k = l;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            v[k++] = left[i++];
        } else {
            v[k++] = right[j++];
        }
    }

    while (i < left.size()) {
        v[k++] = left[i++];
    }

    while (j < right.size()) {
        v[k++] = right[j++];
    }
}

void merge_sort(vector<int>& v, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        merge_sort(v, l, m);
        merge_sort(v, m + 1, r);
        merge(v, l, m, r);
    }
}

int main() {

    vector<int> v = {3, 54, 85, 41, 63, 78, 50};
    merge_sort(v, 0, v.size() - 1);

    cout << "Sorted array: " << v << endl;
}