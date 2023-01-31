#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "First: ";
    int first;
    cin >> first;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Second: ";
    int second;
    cin >> second;
    cout << "First: " << first << " Second: " << second << endl;
    return 0;
}
