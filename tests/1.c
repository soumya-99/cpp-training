#include <stdio.h>

#define SQR(x) (x * x)

int main() {
    int a;
    int b = 4;
    a = SQR(b + 2);
    printf("%d\n", a);
    return 0;
}
