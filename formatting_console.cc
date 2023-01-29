#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    const short SET_W = 30;
    cout << left;
    cout << setw(SET_W) << "First Name" << setw(SET_W) << "Last Name" << endl;
    cout << setw(SET_W) << "Soumyadeep" << setw(SET_W) << "Mondal" << endl;

    // floating point numbers
    cout << fixed << setprecision(2) << 14.12571;
    
    return 0;
}
