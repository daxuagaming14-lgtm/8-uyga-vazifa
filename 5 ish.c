#include <stdio.h>

int main() {
      int n;
    printf("Son kiriting: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 10 == 0) printf("Mos keladi\n");
    else printf("Mos kelmaydi\n");
 
    return 0;
}