#include <iostream>
#include <queue>

using namespace std;

ostream& operator<<(ostream& os, const priority_queue<int>& pq) {
    priority_queue<int> pq_copy = pq;
    while (!pq_copy.empty()) {
        os << pq_copy.top() << " ";
        pq_copy.pop();
    }
    return os;
}

ostream& operator<<(ostream& os, const priority_queue<int, vector<int>, greater<int>>& pq) {
    priority_queue<int, vector<int>, greater<int>> pq_copy = pq;
    while (!pq_copy.empty()) {
        os << pq_copy.top() << " ";
        pq_copy.pop();
    }
    return os;
}

int main(int argc, char const* argv[]) {
    // max heap
    priority_queue<int> pq_max;

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_max.push(1);
    pq_max.push(5);
    pq_max.push(3);
    pq_max.push(2);
    pq_max.push(7);

    cout << "Max Heap: " << pq_max << endl;

    pq_min.push(1);
    pq_min.push(5);
    pq_min.push(3);
    pq_min.push(2);
    pq_min.push(7);

    cout << "Min Heap: " << pq_min << endl;

    return 0;
}
