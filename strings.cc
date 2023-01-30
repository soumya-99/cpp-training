#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    // string name;
    // cout << "Enter Name: ";
    // getline(cin, name);

    // cout << "Your name: " << name;

    // excersize
    string street, city, state, zip_code;
    cout << "Enter street: ";
    getline(cin, street);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter state: ";
    getline(cin, state);
    cout << "Enter zip code: " << endl;
    getline(cin, zip_code);

    cout << "You live in " << street << ", " << city << ", " << state << "-"
         << zip_code;

    return 0;
}
