#include <stdio.h>
#include <unistd.h>

[[noreturn]] int main() {
    while (1) {
        printf("n\n");
        usleep(10000);
    }
}
