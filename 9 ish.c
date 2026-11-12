#include <stdio.h>

int main() {
    double x;
    printf("Son kiriting: ");
    scanf("%lf", &x);
    if (!(x == 0)) printf("Son nol emas\n");
    else printf("Son nolga teng\n");
}
