#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const* argv[]) {
    queue<string> q;
    q.push("a");
    q.push("b");
    q.push("c");
    q.push("d");
    q.push("e");

    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    q.pop();
    cout << q.size() << endl;
    cout << q.front() << endl;

    return 0;
}
