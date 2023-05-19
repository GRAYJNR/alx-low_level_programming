#include <stdio.h>

int main() {
    putchar(('0' + (0 / 10)); ('0' + (0 % 10)); (',');)

    for (int i = 1; i < 100; i++) {
        if (i / 10 != i % 10) {
            putchar(('0' + (i / 10));('0' + (i % 10));)

            if (i != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
