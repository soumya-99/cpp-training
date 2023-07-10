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

// int main() {
//     int z = 50;
//     printf("%d", z+++z);
//     return 0;
// }

// void swap(int* a, int* b) {
//     int* temp = a;
//     a = b;
//     b = temp;
// }

// int main(void) {
//     char c[] = "ICRBCSIT17";
//     char* p = c;
//     printf("%s\n", c + 2 [p] - 6 [p] - 1);

//     int x = 23;
//     int y = 32;
//     swap(&x, &y);
//     printf("%d %d", x, y);
//     return 0;
// }

void xyz(int p1, int* p2) {
    ++p1;
    ++*p2;
    printf("%d%d", p1, *p2);
}

int main() {
    int a = 10;
    xyz(a++, ++*(&a));
    xyz(a++, ++*(&a));
    printf("%d", a);
    return 0;
}