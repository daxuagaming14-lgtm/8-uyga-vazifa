#include <stdio.h>

    int yosh, ball;
    printf("Yosh va tayyorgarlik balini kiriting: ");
    scanf("%d %d", &yosh, &ball);
    if (yosh >= 16 && ball >= 50) printf("Imtihonga kirishi mumkin\n");
    else printf("Imtihonga kira olmaydi\n");
 
    return 0;
}