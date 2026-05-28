#include <stdio.h>

[[noreturn]] int main(const int argc, char** argv) {

    char* out = "n";

    if (argc > 1) {
        out = argv[1];
    }

    while (1) {
        printf("%s\n", out);
    }

}