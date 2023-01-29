#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;


int main(int argc, char const *argv[])
{
    // int arr[] = {10, 30};
    // // std::cout << arr[5] << std::endl;
    // cout << arr;
    string names[3];

    cout << "Enter 1st: ";
    getline(cin, names[0]);
    cout << "Enter 2nd: ";
    getline(cin, names[1]);
    cout << "Enter 3rd: ";
    getline(cin, names[2]);

    cout << "1st name is: " << names[0] << endl;
    return 0;
}
