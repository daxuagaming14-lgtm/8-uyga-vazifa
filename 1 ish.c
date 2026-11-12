#include <stdio.h>

int main() {
    
    double a, b;
    printf("Ikkita son kiriting: ");
    scanf("%lf %lf", &a, &b);
    if (a > b) printf("Birinchi son katta\n");
    else printf("Birinchi son katta emas\n");

    return 0;
}