#include <stdio.h>

// #define SQR(x) (x * x)

// int main() {
//     int a;
//     int b = 4;
//     a = SQR(b + 2);
//     printf("%d\n", a);
//     return 0;
// }

// #define I char
// int main() {
//     I i = 65;
//     printf("%d", sizeof(i));
//     return 0;
// }

// int main() {
//     int* j;
//     {
//         int i = 1000;
//         j = &i;
//     }
//     printf("%d", *j);
//     return 0;
// }

int main() {
    int z = 50;
    printf("%d", z+++z);
    return 0;
}