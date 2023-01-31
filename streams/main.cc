#include <iostream>
#include <limits>

using namespace std;

int get_number(const string& prompt) {
    int number;
    while (true) {
        cout << prompt;
        cin >> number;
        if (cin.fail()) {
            cout << "Error: Invalid input" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    return number;
}

int main(int argc, char const *argv[]) {
    int first = get_number("First: ");
    int second = get_number("Second: ");
    
    cout << "First: " << first << " Second: " << second << endl;
    return 0;
}
