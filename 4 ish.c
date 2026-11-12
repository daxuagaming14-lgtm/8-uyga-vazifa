#include <stdio.h>

int main() {
   double t;
    printf("Havo haroratini kiriting: ");
    scanf("%lf", &t);
    if (t > 20 && t < 35) printf("Havo iliq\n");
    else printf("Havo salqin yoki issiq\n");
 
    return 0;
}