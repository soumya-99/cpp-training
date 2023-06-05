#include <iostream>

using namespace std;

// int main(int argc, char const* argv[]) {
//     // int cin;
//     // cin >> cin;
//     // cout << "cin: " << cin << endl;

//     // const char* a = "Hello\0World";
//     // cout << *a << endl;

//     // int a = 5;
//     // float b;
//     // cout << sizeof(++a + b) << " ";
//     // // ++a;
//     // cout << a;

//     int a = 5;
// 	auto check = [=]() {
// 		a = 10;
// 	};
// 	check();
// 	cout << "Value of a: " << a <<endl;
//     return 0;
// }

// void square(int* x, int* y) {
//     *x = (*x) * --(*y);
// }

// int main() {
//     int number = 30;
//     square(&number, &number);
//     cout << number;
//     return 0;
// }

// int main() {
//     try {
//         try {
//             throw 20;
//         } catch (int n) {
//             cout << "Inner Catch\n";
//             throw;
//         }
//     } catch (int x) {
//         cout << "Outer Catch\n";
//     }
//     return 0;
// }

class A {
   public:
    A() {
        cout << "Constructor called\n";
    }
    ~A() {
        cout << "Destructor called\n";
    }
};

int main(int argc, char const* argv[]) {
    A* a = new A[5];
    delete[] a;
    return 0;
}