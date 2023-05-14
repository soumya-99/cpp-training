#include <iostream>

int fast_inverse_square_root(int x) {
    float xhalf = 0.5f * x;
    int i = *(int *)&x;
    i = 0x5f3759df - (i >> 1);
    x = *(float *)&i;
    x = x * (1.5f - xhalf * x * x);
    return x;
}

int main(int argc, char const *argv[]) {
    int num = 4;
    std::cout << "Fast InvSqrt(" << num << "): " << fast_inverse_square_root(num) << std::endl;
    return 0;
}
