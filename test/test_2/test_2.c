#include <stdio.h>


int main(void) {

    int num;
    scanf("%d", &num);
    for (int i=0; i < 2; i++) {
        num = num * num;
    }

    printf("%d", num);
    return 0;
}