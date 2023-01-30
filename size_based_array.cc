#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[]) {
    // int arr[] = {1, 3, 2, 5, 7};
    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    //     std::cout << arr[i] << std::endl;

    // for (int num : arr) {
    //     std::cout << num << std::endl;
    // }

    // string name = "Soumyadeep Mondal";
    // for (char ch : name) {
    //     std::cout << ch << std::endl;
    // }

    double temparatures[] = {51, 43.25, 74.21, 45, 95.33};
    const int temparatures_length = sizeof(temparatures) / sizeof(double);
    double sum = 0;
    for (auto i = 0; i < temparatures_length; i++) {
        sum += temparatures[i];
    }
    cout << "Average: " << sum / temparatures_length;

    return 0;
}
