#include <stdio.h>

int main() {
   int login, parol;
    printf("Login raqamini va parol raqamini kiriting: ");
    scanf("%d %d", &login, &parol);
    if (login == 777 && parol == 1234) printf("Tizimga xush kelibsiz\n");
    else printf("Login yoki parol noto'g'ri\n");
}
