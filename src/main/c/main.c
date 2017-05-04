#include <stdio.h>  // <1>
#include "greeting.h" // <2>

int main(int argc, char** argv) {
    printf( "%s\n", GREETING_STRING);
    return 0;
}
