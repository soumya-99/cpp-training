#include <cmath>
#include <iostream>

using namespace std;

double fibonacci(int index) {
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, index) / sqrt(5));
}

int main(int argc, char const *argv[]) {
    double fibo = fibonacci(8);
    cout << "Fibonacci: " << fibo << endl;
    return 0;
}
