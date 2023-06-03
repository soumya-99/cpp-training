#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};

    cout << size(arr) << endl;

    cout << a.size() << endl;
    cout << a.empty() << endl;
    cout << a.at(1) << endl;
    cout << a.back() << endl;
    cout << a.front();

    return 0;
}
