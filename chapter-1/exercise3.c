#include <stdio.h>

void strcpy_static(char dst[], char src[]) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';
}

int main() {
    char src[20];
    strcpy_static(src, "coolness");
    printf("%s\n", src);
}
