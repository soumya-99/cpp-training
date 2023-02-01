#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

string double_to_string(double& number, short precision) {
    stringstream ss;
    ss << fixed << setprecision(precision) << number;
    return ss.str();
}

int main(int argc, char const* argv[]) {
    double number = 123.456;
    string str = double_to_string(number, 2);
    cout << str << endl;

    return 0;
}
