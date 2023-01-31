#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    // string name;
    // cout << "Enter Name: ";
    // getline(cin, name);

    // cout << "Your name: " << name;

    // excersize
    // string street, city, state, zip_code;
    // cout << "Enter street: ";
    // getline(cin, street);
    // cout << "Enter city: ";
    // getline(cin, city);
    // cout << "Enter state: ";
    // getline(cin, state);
    // cout << "Enter zip code: " << endl;
    // getline(cin, zip_code);

    // cout << "You live in " << street << ", " << city << ", " << state << "-"
    //      << zip_code;

    // string name = "Soumya";
    // name[0] = 's';
    // cout << name.front() << endl;
    // cout << name.back() << endl;
    // string another = "bla bla";

    // cout << name + another << endl;
    // cout << std::boolalpha << name.empty() << endl;
    // cout << name;

    string name = "Soum,yadeep";
    // name.insert(0, "Mr. ");
    // cout << name << endl;

    // name.erase(0, 6);
    // cout << name << endl;

    // name.replace(0, 3, "SOU");
    // cout << name << endl;

    cout << name.find('o', 0) << endl;
    cout << name.rfind('e') << endl;
    cout << name.find_first_of(",") << endl;

    return 0;
}
